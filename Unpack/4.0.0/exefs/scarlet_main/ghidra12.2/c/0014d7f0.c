/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0014d7f0; name: FUN_0014d7f0
 */


void FUN_0014d7f0(undefined8 param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_3 ^ 0x1fe0000;
  uVar2 = param_4 ^ param_3 ^ 0x1fe000000000ff;
  uVar1 = (param_4 ^ param_3) << 0x11 ^ 0x1fe000000000ff;
  uVar3 = uVar5 ^ (uVar2 >> 0x13 | uVar2 << 0x2d);
  uVar2 = param_3 ^ uVar2 ^ uVar3 ^ 0xff;
  uVar4 = uVar1 ^ uVar5;
  uVar3 = uVar4 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar5 << 0x11 ^ uVar2;
  uVar5 = uVar1 ^ uVar4;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar5 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar4 << 0x11 ^ uVar2;
  uVar4 = uVar1 ^ uVar5;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar4 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar5 << 0x11 ^ uVar2;
  uVar5 = uVar1 ^ uVar4;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar5 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar4 << 0x11 ^ uVar2;
  uVar4 = uVar1 ^ uVar5;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar4 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar5 << 0x11 ^ uVar2;
  uVar5 = uVar1 ^ uVar4;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar5 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar4 << 0x11 ^ uVar2;
  uVar4 = uVar1 ^ uVar5;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar4 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar5 << 0x11 ^ uVar2;
  uVar5 = uVar1 ^ uVar4;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar5 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar4 << 0x11 ^ uVar2;
  uVar4 = uVar1 ^ uVar5;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar4 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar5 << 0x11 ^ uVar2;
  uVar5 = uVar1 ^ uVar4;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar5 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar4 << 0x11 ^ uVar2;
  uVar4 = uVar1 ^ uVar5;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar4 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar5 << 0x11 ^ uVar2;
  uVar5 = uVar1 ^ uVar4;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar5 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar4 << 0x11 ^ uVar2;
  uVar4 = uVar1 ^ uVar5;
  uVar2 = uVar3 ^ uVar2;
  uVar3 = uVar4 ^ (uVar3 >> 0x13 | uVar3 << 0x2d);
  uVar1 = uVar1 ^ uVar5 << 0x11 ^ uVar2;
  *param_2 = uVar3 ^ uVar2;
  param_2[1] = uVar1 ^ uVar4;
  param_2[2] = uVar1 ^ uVar4 << 0x11;
  param_2[3] = uVar3 >> 0x13 | uVar3 << 0x2d;
  FUN_00c5d960(param_1,param_3);
  FUN_00c5d960(param_1,param_4);
  return;
}


