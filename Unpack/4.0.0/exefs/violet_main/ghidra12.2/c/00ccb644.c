/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ccb644; name: FUN_00ccb644
 */


void FUN_00ccb644(long param_1)

{
  long lVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = param_1 + 0x10;
  (**(code **)PTR_DAT_047e1918)(lVar1,1);
  (**(code **)PTR_DAT_047e1920)(lVar1,1);
  local_30 = DAT_03cab620;
  uStack_28 = DAT_03cab628;
  (**(code **)PTR_DAT_047e1928)(lVar1,&local_30,0x25);
  FUN_00ccb6d8(&DAT_00003010 + param_1,lVar1);
  return;
}


