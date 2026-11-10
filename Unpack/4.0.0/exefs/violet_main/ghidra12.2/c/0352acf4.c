/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0352acf4; name: FUN_0352acf4
 */


undefined8 FUN_0352acf4(long param_1,int *param_2)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined8 uVar3;
  uint local_40;
  undefined1 local_3c;
  undefined1 *local_38;
  undefined1 local_30;
  long *local_28;
  
  local_38 = (undefined1 *)&local_40;
  local_3c = 0;
  auVar1 = SEXT816((long)((ulong)*(uint *)PTR_DAT_047e6fa0 * (long)*param_2)) *
           SEXT816(0x20c49ba5e353f7cf);
  local_40 = (int)(auVar1._8_8_ >> 7) - (auVar1._12_4_ >> 0x1f);
  local_40 = local_40 & ((int)local_40 >> 0x1f ^ 0xffffffffU);
  if (((*(byte *)(param_1 + 0x5a) & 0xe) == 0) && (*(long *)(param_1 + 0x10) == 0)) {
    local_30 = 0;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
    uVar2 = FUN_03527670(param_1);
    local_28 = (long *)FUN_03527714(param_1,uVar2);
    if (local_28 != (long *)0x0) {
      FUN_035279f0(param_1,uVar2,&local_38,&local_28);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x80))();
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}


