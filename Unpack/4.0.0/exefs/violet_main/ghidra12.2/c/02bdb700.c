/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02bdb700; name: ~Mutex
 */


/* nn::os::Mutex::~Mutex() */

void __thiscall nn::os::Mutex::~Mutex(Mutex *this)

{
  (*(code *)PTR_FinalizeMutex_047c9a88)();
  return;
}


