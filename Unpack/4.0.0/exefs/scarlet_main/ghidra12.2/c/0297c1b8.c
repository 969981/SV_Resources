/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297c1b8; name: FUN_0297c1b8
 */


void FUN_0297c1b8(uint *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  
  uVar2 = *param_2 + *param_1;
  if (0xfb < uVar2) {
    uVar2 = 0xfc;
  }
  *param_1 = uVar2;
  uVar1 = (short)param_2[1] + (short)param_1[1];
  if (0xfb < uVar1) {
    uVar1 = 0xfc;
  }
  *(ushort *)(param_1 + 1) = uVar1;
  uVar1 = *(short *)((long)param_2 + 6) + *(short *)((long)param_1 + 6);
  if (0xfb < uVar1) {
    uVar1 = 0xfc;
  }
  *(ushort *)((long)param_1 + 6) = uVar1;
  uVar1 = (short)param_2[2] + (short)param_1[2];
  if (0xfb < uVar1) {
    uVar1 = 0xfc;
  }
  *(ushort *)(param_1 + 2) = uVar1;
  uVar1 = *(short *)((long)param_2 + 10) + *(short *)((long)param_1 + 10);
  if (0xfb < uVar1) {
    uVar1 = 0xfc;
  }
  *(ushort *)((long)param_1 + 10) = uVar1;
  uVar1 = (short)param_2[3] + (short)param_1[3];
  if (0xfb < uVar1) {
    uVar1 = 0xfc;
  }
  *(ushort *)(param_1 + 3) = uVar1;
  uVar1 = *(short *)((long)param_2 + 0xe) + *(short *)((long)param_1 + 0xe);
  if (0xfb < uVar1) {
    uVar1 = 0xfc;
  }
  *(ushort *)((long)param_1 + 0xe) = uVar1;
  return;
}


