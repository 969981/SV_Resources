/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0348a79c; name: FUN_0348a79c
 */


undefined8 *
FUN_0348a79c(long *param_1,long *param_2,long param_3,undefined8 param_4,undefined4 param_5,
            byte param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  byte bVar4;
  
  puVar1 = (undefined8 *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(5,0x1e0,0x10);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *(undefined4 *)((long)puVar1 + 0x1d4) = param_5;
  *puVar1 = &PTR_FUN_047c3018;
  puVar1[1] = 0x3f8000003f800000;
  puVar1[2] = 0x3f8000003f800000;
  puVar1[0x39] = 0xc58000003f800000;
  *(undefined4 *)(puVar1 + 0x3a) = 0xc5800000;
  bVar4 = 2;
  if ((param_6 & 1) == 0) {
    bVar4 = 0;
  }
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  *(byte *)(puVar1 + 0x3b) = bVar4 | param_6 & 1 | *(byte *)(puVar1 + 0x3b) & 0xf8;
  puVar1[0x32] = param_2;
  puVar1[0x33] = param_3;
  puVar1[0x34] = param_4;
  puVar1[0x35] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  if (*(long *)(param_3 + 0x60) == 0) {
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  }
  else if (*(long *)(param_3 + 0x70) == 0) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(*(long *)(param_3 + 0x70) + 0x78);
  }
  puVar1[0x36] = uVar2;
  FUN_03489c58(puVar1,0,0);
  if (((*(uint *)(param_3 + 0x158) & 0xf00) == 0x300) || (*(long *)(param_3 + 0x178) == 0))
  goto LAB_0348a8c0;
  plVar3 = *(long **)(*(long *)(param_3 + 0x178) + 0x60);
  if (plVar3 == (long *)0x0) {
    if (*(long *)(param_3 + 8) == 0) goto LAB_0348a8c0;
    FUN_03502058(param_3);
    plVar3 = *(long **)(*(long *)(param_3 + 0x178) + 0x60);
    if (plVar3 == (long *)0x0) goto LAB_0348a8c0;
  }
  (**(code **)(*plVar3 + 0x40))(plVar3,puVar1);
LAB_0348a8c0:
  if (*param_1 == 0) {
    *param_1 = (long)puVar1;
    puVar1[4] = 0;
  }
  else {
    puVar1[4] = *param_1;
    *param_1 = (long)puVar1;
  }
  return puVar1;
}


