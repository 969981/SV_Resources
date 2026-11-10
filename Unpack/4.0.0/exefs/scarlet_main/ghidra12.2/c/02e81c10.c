/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e81c10; name: FUN_02e81c10
 */


void FUN_02e81c10(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(float *)(param_2 + 4) < (float)*(undefined8 *)(param_1 + 0x10)) {
    uVar1 = *(undefined4 *)(param_2 + 1);
    uVar2 = *(undefined4 *)((long)param_2 + 0xc);
    *(undefined8 *)(param_1 + 0x20) = *param_2;
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    uVar1 = *(undefined4 *)(param_2 + 3);
    uVar2 = *(undefined4 *)((long)param_2 + 0x1c);
    *(undefined8 *)(param_1 + 0x30) = param_2[2];
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    *(undefined4 *)(param_1 + 0x3c) = uVar2;
    uVar1 = *(undefined4 *)(param_2 + 5);
    uVar2 = *(undefined4 *)((long)param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x40) = param_2[4];
    *(undefined4 *)(param_1 + 0x48) = uVar1;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    uVar1 = *(undefined4 *)(param_2 + 7);
    uVar2 = *(undefined4 *)((long)param_2 + 0x3c);
    *(undefined8 *)(param_1 + 0x50) = param_2[6];
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
    uVar1 = *(undefined4 *)(param_2 + 9);
    uVar2 = *(undefined4 *)((long)param_2 + 0x4c);
    *(undefined8 *)(param_1 + 0x60) = param_2[8];
    *(undefined4 *)(param_1 + 0x68) = uVar1;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    uVar1 = *(undefined4 *)(param_2 + 0xb);
    uVar2 = *(undefined4 *)((long)param_2 + 0x5c);
    *(undefined8 *)(param_1 + 0x70) = param_2[10];
    *(undefined4 *)(param_1 + 0x78) = uVar1;
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    uVar1 = *(undefined4 *)(param_2 + 0xd);
    uVar2 = *(undefined4 *)((long)param_2 + 0x6c);
    *(undefined8 *)(param_1 + 0x80) = param_2[0xc];
    *(undefined4 *)(param_1 + 0x88) = uVar1;
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
    uVar1 = *(undefined4 *)(param_2 + 0xf);
    uVar2 = *(undefined4 *)((long)param_2 + 0x7c);
    *(undefined8 *)(param_1 + 0x90) = param_2[0xe];
    *(undefined4 *)(param_1 + 0x98) = uVar1;
    *(undefined4 *)(param_1 + 0x9c) = uVar2;
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(ulong *)(param_1 + 0x10) = CONCAT44(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 4))
    ;
  }
  return;
}


