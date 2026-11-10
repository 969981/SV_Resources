/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008dd198; name: FUN_008dd198
 */


void FUN_008dd198(long param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  *(undefined8 *)(param_1 + 0x154) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x124) = 0xffffffffffffffff;
  piVar1 = (int *)(param_1 + 0x14c);
  piVar1[0] = -1;
  piVar1[1] = -1;
  piVar2 = (int *)(param_1 + 0x144);
  piVar2[0] = -1;
  piVar2[1] = -1;
  piVar3 = (int *)(param_1 + 0x13c);
  piVar3[0] = -1;
  piVar3[1] = -1;
  piVar4 = (int *)(param_1 + 0x134);
  piVar4[0] = -1;
  piVar4[1] = -1;
  piVar5 = (int *)(param_1 + 300);
  piVar5[0] = -1;
  piVar5[1] = -1;
  *(undefined8 *)(param_1 + 0x16c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x174) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x15c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0x164) = 0xffffffffffffffff;
  FUN_008ee42c((undefined8 *)(param_1 + 0x124),*(undefined8 *)(param_1 + 8),"sysViewUniformBlock");
  FUN_008ee42c(piVar5,*(undefined8 *)(param_1 + 8),"sysEmitterStaticUniformBlock");
  FUN_008ee42c(piVar4,*(undefined8 *)(param_1 + 8),"sysEmitterDynamicUniformBlock");
  FUN_008ee42c(piVar3,*(undefined8 *)(param_1 + 8),"sysEmitterFieldUniformBlock");
  FUN_008ee42c(piVar2,*(undefined8 *)(param_1 + 8),"sysEmitterPluginUniformBlock");
  FUN_008ee42c(piVar1,*(undefined8 *)(param_1 + 8),"sysCustomShaderReservedUniformBlockParam");
  FUN_008ee42c(param_1 + 0x154,*(undefined8 *)(param_1 + 8),"sysCustomShaderUniformBlock0");
  FUN_008ee42c(param_1 + 0x15c,*(undefined8 *)(param_1 + 8),"sysCustomShaderUniformBlock1");
  FUN_008ee42c(param_1 + 0x164,*(undefined8 *)(param_1 + 8),"sysCustomShaderUniformBlock2");
  FUN_008ee42c(param_1 + 0x16c,*(undefined8 *)(param_1 + 8),"sysCustomShaderUniformBlock3");
  if (*(int *)(param_1 + 0x124) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  }
  if (*(int *)(param_1 + 0x128) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x8000;
  }
  if (*piVar5 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 2;
  }
  if (*(int *)(param_1 + 0x130) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10000;
  }
  if (*piVar4 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 4;
  }
  if (*(int *)(param_1 + 0x138) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20000;
  }
  if (*piVar3 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 8;
  }
  if (*(int *)(param_1 + 0x140) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40000;
  }
  if (*piVar2 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x10;
  }
  if (*(int *)(param_1 + 0x148) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80000;
  }
  if (*piVar1 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x20;
  }
  if (*(int *)(param_1 + 0x150) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100000;
  }
  if (*(int *)(param_1 + 0x124) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x40;
  }
  if (*(int *)(param_1 + 0x128) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200000;
  }
  if (*piVar5 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x80;
  }
  if (*(int *)(param_1 + 0x130) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x400000;
  }
  if (*piVar4 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if (*(int *)(param_1 + 0x138) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x800000;
  }
  if (*piVar3 != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x200;
  }
  if (*(int *)(param_1 + 0x140) != -1) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x1000000;
  }
  return;
}


