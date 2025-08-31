<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bike Models India - Premium Motorcycles with Indian Pricing</title>
    <script src="https://cdn.tailwindcss.com"></script>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <link href="https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500;600;700&family=Roboto:wght@400;500;700&display=swap" rel="stylesheet">
    <style>
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
        }
        
        body {
            background: linear-gradient(135deg, #000000 0%, #1a1a1a 100%);
            color: #ffffff;
            min-height: 100vh;
            font-family: 'Inter', sans-serif;
        }
        
        .inr-price {
            font-feature-settings: 'lnum' 1;
            font-variant-numeric: lining-nums;
        }
        
        .bike-card {
            background: linear-gradient(145deg, #1a1a1a 0%, #2d2d2d 100%);
            border-radius: 20px;
            transition: all 0.3s ease;
            border: 1px solid rgba(255, 255, 255, 0.1);
            overflow: hidden;
        }
        
        .bike-card:hover {
            transform: translateY(-8px);
            box-shadow: 0 25px 50px rgba(0, 0, 0, 0.3);
            border-color: rgba(255, 0, 0, 0.3);
        }
        
        .bike-image {
            transition: all 0.5s ease;
            filter: drop-shadow(0 10px 20px rgba(0, 0, 0, 0.3));
        }
        
        .bike-card:hover .bike-image {
            transform: scale(1.05);
        }
        
        .specs-grid {
            display: grid;
            grid-template-columns: repeat(auto-fit, minmax(120px, 1fr));
            gap: 0.75rem;
            margin-top: 1rem;
        }
        
        .spec-item {
            background: rgba(220, 38, 38, 0.15);
            padding: 0.75rem;
            border-radius: 12px;
            text-align: center;
            border: 1px solid rgba(220, 38, 38, 0.3);
        }
        
        .gradient-text {
            background: linear-gradient(135deg, #dc2626 0%, #ef4444 50%, #f87171 100%);
            -webkit-background-clip: text;
            -webkit-text-fill-color: transparent;
            background-clip: text;
        }
        
        .model-badge {
            background: linear-gradient(135deg, #dc2626, #ef4444);
            padding: 0.25rem 1rem;
            border-radius: 20px;
            font-size: 0.75rem;
            font-weight: 600;
        }
        
        .cc-badge {
            background: linear-gradient(135deg, #3b82f6, #60a5fa);
            padding: 0.25rem 0.75rem;
            border-radius: 15px;
            font-size: 0.75rem;
            font-weight: 600;
        }
        
        .indian-flag {
            width: 20px;
            height: 20px;
            background: linear-gradient(135deg, #FF5722 33%, #FFFFFF 33%, #FFFFFF 66%, #138808 66%);
            border-radius: 50%;
            display: inline-block;
            margin-right: 8px;
        }
        
        @keyframes fadeIn {
            from { opacity: 0; transform: translateY(30px); }
            to { opacity: 1; transform: translateY(0); }
        }
        
        .fade-in {
            animation: fadeIn 0.8s ease forwards;
        }
        
        .nav-item {
            position: relative;
            padding: 0.75rem 1.5rem;
            border-radius: 25px;
            transition: all 0.3s ease;
            font-weight: 500;
        }
        
        .nav-item.active {
            background: rgba(220, 38, 38, 0.2);
            border: 1px solid rgba(220, 38, 38, 0.4);
        }
        
        .nav-item:hover {
            background: rgba(220, 38, 38, 0.1);
        }
        
        .feature-icon {
            width: 50px;
            height: 50px;
            background: rgba(220, 38, 38, 0.1);
            border-radius: 12px;
            display: flex;
            align-items: center;
            justify-content: center;
            margin-bottom: 1rem;
        }
        
        .offer-tag {
            background: linear-gradient(135deg, #10b981, #34d399);
            padding: 0.25rem 0.75rem;
            border-radius: 15px;
            font-size: 0.75rem;
            font-weight: 600;
        }
        
        .color-option {
            width: 20px;
            height: 20px;
            border-radius: 50%;
            cursor: pointer;
            transition: transform 0.2s ease;
            margin: 0 3px;
            border: 2px solid rgba(255, 255, 255, 0.3);
        }
        
        .color-option:hover {
            transform: scale(1.2);
        }
        
        .color-option.active {
            transform: scale(1.3);
            box-shadow: 0 0 0 3px white;
        }
    </style>
</head>
<body class="min-h-screen">
    <!-- Header -->
    <header class="bg-black/80 backdrop-blur-md sticky top-0 z-50 border-b border-red-700/30">
        <div class="container mx-auto px-4 py-4">
            <div class="flex items-center justify-between">
                <div class="flex items-center space-x-3">
                    <div class="w-10 h-10 bg-gradient-to-r from-red-600 to-red-800 rounded-full flex items-center justify-center">
                        <i class="fas fa-motorcycle text-white text-lg"></i>
                    </div>
                    <h1 class="text-xl font-semibold">Bike Models India</h1>
                    <span class="indian-flag"></span>
                </div>
                
                <nav class="hidden md:flex items-center space-x-2 bg-black/30 rounded-full p-1">
                    <button class="nav-item active" data-category="all">All Bikes</button>
                    <button class="nav-item" data-category="sports">Sports</button>
                    <button class="nav-item" data-category="commuter">Commuter</button>
                    <button class="nav-item" data-category="cruiser">Cruiser</button>
                    <button class="nav-item" data-category="adventure">Adventure</button>
                </nav>
                
                <div class="flex items-center space-x-4">
                    <button class="p-3 rounded-full hover:bg-red-700/30 transition-colors">
                        <i class="fas fa-search text-red-300"></i>
                    </button>
                    <button class="p-3 rounded-full hover:bg-red-700/30 transition-colors">
                        <i class="fas fa-heart text-red-300"></i>
                    </button>
                </div>
            </div>
        </div>
    </header>

    <!-- Hero Section -->
    <section class="relative overflow-hidden">
        <div class="container mx-auto px-4 py-20 text-center">
            <div class="max-w-5xl mx-auto">
                <h2 class="text-5xl md:text-7xl font-bold mb-6 gradient-text">Premium Bike Collection</h2>
                <p class="text-xl text-gray-300 mb-8">Discover India's finest motorcycles with competitive pricing and thrilling performance</p>
                <div class="flex flex-wrap justify-center gap-4">
                    <button class="bg-red-600 hover:bg-red-700 text-white px-8 py-4 rounded-full font-semibold transition-colors transform hover:scale-105">
                        <i class="fas fa-rupee-sign mr-2"></i>View Prices
                    </button>
                    <button class="border border-red-500/30 text-white px-8 py-4 rounded-full font-semibold hover:bg-red-600/20 transition-colors">
                        Compare Models
                    </button>
                </div>
            </div>
        </div>
        
        <!-- Animated background elements -->
        <div class="absolute top-0 left-0 w-full h-full -z-10">
            <div class="absolute top-1/4 left-1/4 w-72 h-72 bg-red-500/10 rounded-full blur-3xl"></div>
            <div class="absolute top-1/2 right-1/4 w-96 h-96 bg-red-400/10 rounded-full blur-3xl"></div>
        </div>
    </section>

    <!-- Bike Models Grid -->
    <main class="container mx-auto px-4 py-16">
        <div class="text-center mb-16">
            <h3 class="text-4xl font-bold mb-4">Bike Models Collection</h3>
            <p class="text-gray-300 max-w-3xl mx-auto">Explore our comprehensive range of motorcycles designed for performance, comfort, and style</p>
        </div>

        <div class="grid grid-cols-1 md:grid-cols-2 lg:grid-cols-3 xl:grid-cols-4 gap-8" id="bike-grid">
            <!-- Sports Bike 1 -->
            <div class="bike-card fade-in" data-category="sports">
                <div class="p-6">
                    <div class="flex justify-between items-start mb-4">
                        <div>
                            <h4 class="text-2xl font-bold">Yamaha R15 V4</h4>
                            <p class="text-gray-300">Sports Bike</p>
                        </div>
                        <span class="cc-badge">155cc</span>
                    </div>
                    
                    <div class="relative h-48 mb-6 flex items-center justify-center bg-gray-900/50 rounded-xl">
                        <img src="https://placehold.co/400x300" alt="Yamaha R15 V4 sports bike in racing blue with aggressive styling, LED headlights, and sporty fairing" class="bike-image h-40 object-contain" />
                    </div>
                    
                    <div class="specs-grid">
                        <div class="spec-item">
                            <i class="fas fa-tachometer-alt text-red-400 mb-1"></i>
                            <p class="text-xs">18.6 HP</p>
                        </div>
                        <div class="spec-item">
                            <i class="fas fa-bolt text-red-400 mb-1"></i>
                            <p class="text-xs">14.2 Nm</p>
                        </div>
                        <div class="spec-item">
                            <i class="fas fa-weight text-red-400 mb-1"></i>
                            <p class="text-xs">142 kg</p>
                        </div>
                    </div>
                    
                    <div class="mt-6">
                        <div class="flex justify-between items-center mb-2">
                            <p class="text-2xl font-bold inr-price">₹1,82,000</p>
                            <span class="offer-tag">ABS</span>
                        </div>
                        <p class="text-gray-400 text-sm mb-4">Ex-showroom price</p>
                        
                        <div class="flex justify-center space-x-1 mb-4">
                            <div class="color-option active bg-blue-600" data-color="racing-blue"></div>
                            <div class="color-option bg-black" data-color="black"></div>
                            <div class="color-option bg-red-600" data-color="red"></div>
                        </div>
                        
                        <button class="w-full bg-red-600 hover:bg-red-700 text-white py-3 rounded-lg font-semibold transition-colors">
                            <i class="fas fa-rupee-sign mr-2"></i>Book Test Ride
                        </button>
                    </div>
                </div>
            </div>

            <!-- Commuter Bike -->
            <div class="bike-card fade-in" data-category="commuter">
                <div class="p-6">
                    <div class="flex justify-between items-start mb-4">
                        <div>
                            <h4 class="text-2xl font-bold">Honda CB Shine</h4>
                            <p class="text-gray-300">Commuter</p>
                        </div>
                        <span class="cc-badge">125cc</span>
                    </div>
                    
                    <div class="relative h-48 mb-6 flex items-center justify-center bg-gray-900/50 rounded-xl">
                        <img src="https://placehold.co/400x300" alt="Honda CB Shine commuter bike in metallic red with comfortable seating, practical design, and fuel efficiency" class="bike-image h-40 object-contain" />
                    </div>
                    
                    <div class="specs-grid">
                        <div class="spec-item">
                            <i class="fas fa-tachometer-alt text-red-400 mb-1"></i>
                            <p class="text-xs">10.7 HP</p>
                        </div>
                        <div class="spec-item">
                            <i class="fas fa-gas-pump text-red-400 mb-1"></i>
                            <p class="text-xs">65 kmpl</p>
                        </div>
                        <div class="spec-item">
                            <i class="fas fa-weight text-red-400 mb-1"></i>
                            <p class="text-xs">115 kg</p>
                        </div>
                    </div>
                    
                    <div class="mt-6">
                        <div class="flex justify-between items-center mb-2">
                            <p class="text-2xl font-bold inr-price">₹79,000</p>
                            <span class="offer-tag">ECONOMY</span>
                        </div>
                        <p class="text-gray-400 text-sm mb-4">Ex-showroom price</p>
                        
                        <div class="flex justify-center space-x-1 mb-4">
                            <div class="color-option active bg-red-600" data-color="red"></div>
                            <div class="color-option bg-black" data-color="black"></div>
                            <div class="color-option bg-gray-300" data-color="silver"></div>
                        </div>
                        
                        <button class="w-full bg-red-600 hover:bg-red-700 text-white py-3 rounded-lg font-semibold transition-colors">
                            <i class="fas fa-rupee-sign mr-2"></i>Book Test Ride
                        </button>
                    </div>
                </div>
            </div>

            <!-- Adventure Bike -->
            <div class="bike-card fade-in" data-category="adventure">
                <div class="p-6">
                    <div class="flex justify-between items-start mb-4">
                        <div>
                            <h4 class="text-2xl font-bold">Royal Enfield Himalayan</h4>
                            <p class="text-gray-300">Adventure</p>
                        </div>
                        <span class="cc-badge">411cc</span>
                    </div>
                    
                    <div class="relative h-48 mb-6 flex items-center justify-center bg-gray-900/50 rounded-xl">
                        <img src="https://placehold.co/400x300" alt="Royal Enfield Himalayan adventure bike in granite black with rugged design, long travel suspension, and touring capabilities" class="bike-image h-40 object-contain" />
                    </div>
                    
                    <div class="specs-grid">
                        <div class="spec-item">
                            <i class="fas fa-tachometer-alt text-red-400 mb-1"></i>
                            <p class="text-xs">24.3 HP</p>
                        </div>
                        <div class="spec-item">
                            <i class="fas fa-mountain text-red-400 mb-1"></i>
                            <p class="text-xs">32 Nm</p>
                        </div>
                        <div class="spec-item">
                            <i class="fas fa-weight text-red-400 mb-1"></i>
                            <p class="text-xs">199 kg</p>
                        </div>
                    </div>
                    
                    <div class="mt-6">
                        <div class="flex justify-between items-center mb-2">
                            <p class="text-2xl font-bold inr-price">₹2,16,000</p>
                            <span class="model-badge">ADVENTURE</span>
                        </div>
                        <p class="text-gray-400 text-sm mb-4">Ex-showroom price</p>
                        
                        <div class="flex justify-center space-x-1 mb-4">
                            <div class