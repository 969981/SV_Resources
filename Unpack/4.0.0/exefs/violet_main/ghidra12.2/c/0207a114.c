/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0207a114; name: FUN_0207a114
 */


void FUN_0207a114(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  
  lVar1 = FUN_0207a02c(param_2,*param_4);
  if ((((*(long *)(lVar1 + 0xd8) == 0) || (*(short *)(*(long *)(lVar1 + 0xd8) + 0x1a) == 0)) &&
      (uVar3 = FUN_01473a8c(lVar1 + 0xc0), (uVar3 & 1) == 0)) || (*(long *)(lVar1 + 0xd0) == 0)) {
    puVar2 = (undefined1 *)FUN_00f6866c();
  }
  else {
    FUN_0207a108(*(long *)(lVar1 + 0xd0),0);
    puVar2 = (undefined1 *)FUN_013e253c();
  }
  *param_1 = *puVar2;
  return;
}


