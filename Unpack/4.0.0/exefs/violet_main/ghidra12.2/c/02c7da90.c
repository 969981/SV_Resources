/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02c7da90; name: nninitStartup
 */


void nninitStartup(void)

{
  undefined8 *local_148;
  long lStack_140;
  undefined1 auStack_138 [24];
  long local_120;
  long local_100;
  ulong local_68 [4];
  long local_48;
  long local_18;
  
  nn::os::QueryMemoryInfo((MemoryInfo *)local_68);
  if (0x100000000 < local_68[0]) {
    DAT_0485942c = 1;
  }
  FUN_0177d510();
  DAT_048639d8 = 0;
  DAT_048639e0 = 0;
  DAT_048639c8 = PTR_DAT_047e2480 + 0x10;
  DAT_048639d0 = PTR_DAT_047e2480 + 0x130;
  FUN_02b28e70(auStack_138,0);
  local_18 = local_48 + 0xb6800000;
  lStack_140 = local_120 + local_100 + -0xbea00000;
  local_148 = &DAT_048639c8;
  FUN_014eca54(&DAT_04863918,&local_18,&local_148);
  DAT_04859418 = &DAT_04863918;
  (**(code **)(DAT_04863918 + 0xe0))(&DAT_04863918,"GlobalHeap");
  local_148 = &DAT_048639c8;
  FUN_014eca54(&DAT_04863970,&lStack_140,&local_148);
  DAT_04859420 = &DAT_04863970;
  (**(code **)(DAT_04863970 + 0xe0))(&DAT_04863970,"DebugHeap");
  nn::os::SetMemoryAllocatorForThreadLocal
            ((_func_void_ptr_ulong_ulong *)&LAB_02c7dbe8,(_func_void_void_ptr_ulong *)&LAB_02c7dc04)
  ;
  nn::fs::SetAllocator
            ((_func_void_ptr_ulong *)&LAB_02c7dc94,(_func_void_void_ptr_ulong *)&LAB_02c7dcb0);
  FUN_014041ac(0);
  DAT_04859428 = 1;
  return;
}


