/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0031c778; name: FUN_0031c778
 */


void FUN_0031c778(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_168 [296];
  undefined1 auStack_38 [8];
  
  FUN_00368450(auStack_168);
  lVar3 = param_1 + 200;
  uVar4 = *(uint *)(*(long *)(*(long *)(*(long *)(param_1 + 0x18) + 8) + 0x28) + 0xc);
  iVar1 = FUN_0034cf70(*(undefined4 *)(param_1 + 8),lVar3,auStack_168);
  if (iVar1 == 0) {
    if ((PTR_DAT_047ccba0[0x10] != '\0') &&
       (iVar1 = FUN_0034ccc0(*(undefined4 *)(param_1 + 8),auStack_38), iVar1 == 0))
    goto LAB_0031c880;
  }
  else {
    if ((PTR_DAT_047ccba0[0x10] != '\0') &&
       (iVar1 = FUN_0034ccc0(*(undefined4 *)(param_1 + 8),auStack_38), iVar1 == 0)) {
LAB_0031c880:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    FUN_00368930(lVar3,auStack_168);
    uVar4 = uVar4 | 0x80000000;
  }
  FUN_00368470(auStack_168);
  FUN_00374ad8(param_1 + 0x1f0,lVar3,uVar4);
  lVar3 = *(long *)(*(long *)(param_1 + 0x18) + 8);
  puVar2 = *(undefined8 **)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x28) = param_1 + 0x1f0;
  if (puVar2 != (undefined8 *)0x0) {
                    /* try { // try from 0031c844 to 0031c847 has its CatchHandler @ 0031c884 */
    (**(code **)*puVar2)();
  }
  *(long *)(param_1 + 0x330) = **(long **)(param_1 + 0x18);
  **(long **)(param_1 + 0x18) = param_1 + 0x338;
  *(undefined8 *)(param_1 + 0x18) = 0;
  FUN_00344800(param_2);
  return;
}


