/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033f84f4; name: FUN_033f84f4
 */


void FUN_033f84f4(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)((long)param_2 + 0x11) != '\0') {
    uVar1 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    FUN_033d3c04(uVar1,param_2[2],param_2[1],param_2[3],*(long *)(param_1 + 0x20) + 0x10,*param_2);
    *(uint *)(param_1 + 0x28) =
         *(uint *)(param_1 + 0x28) & 0xfffffffe | (uint)*(byte *)(param_2 + 4);
  }
  if (*(char *)((long)param_2 + 0x25) != '\0') {
    uVar1 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    FUN_033d3c04(uVar1,param_2[7],param_2[6],param_2[8],*(long *)(param_1 + 0x20) + 0x30,param_2[5])
    ;
    *(uint *)(param_1 + 0x28) =
         *(uint *)(param_1 + 0x28) & 0xfffffffd | (uint)*(byte *)(param_2 + 9) << 1;
  }
  if (*(char *)((long)param_2 + 0x39) != '\0') {
    uVar1 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    FUN_033d3c04(uVar1,param_2[0xc],param_2[0xb],param_2[0xd],*(long *)(param_1 + 0x20) + 0x50,
                 param_2[10]);
    *(uint *)(param_1 + 0x28) =
         *(uint *)(param_1 + 0x28) & 0xfffffffb | (uint)*(byte *)(param_2 + 0xe) << 2;
  }
  if (*(char *)((long)param_2 + 0x4d) != '\0') {
    uVar1 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    FUN_033d3c04(uVar1,param_2[0x11],param_2[0x10],param_2[0x12],*(long *)(param_1 + 0x30) + 0x10,
                 param_2[0xf]);
    *(uint *)(param_1 + 0x38) =
         *(uint *)(param_1 + 0x38) & 0xfffffffe | (uint)*(byte *)(param_2 + 0x13);
  }
  if (*(char *)((long)param_2 + 0x61) != '\0') {
    uVar1 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    FUN_033d3c04(uVar1,param_2[0x16],param_2[0x15],param_2[0x17],*(long *)(param_1 + 0x30) + 0x30,
                 param_2[0x14]);
    *(uint *)(param_1 + 0x38) =
         *(uint *)(param_1 + 0x38) & 0xfffffffd | (uint)*(byte *)(param_2 + 0x18) << 1;
  }
  if (*(char *)((long)param_2 + 0x75) != '\0') {
    uVar1 = NEON_ucvtf(*(undefined4 *)(param_1 + 0x108));
    FUN_033d3c04(uVar1,param_2[0x1b],param_2[0x1a],param_2[0x1c],*(long *)(param_1 + 0x30) + 0x50,
                 param_2[0x19]);
    *(uint *)(param_1 + 0x38) =
         *(uint *)(param_1 + 0x38) & 0xfffffffb | (uint)*(byte *)(param_2 + 0x1d) << 2;
  }
  return;
}


