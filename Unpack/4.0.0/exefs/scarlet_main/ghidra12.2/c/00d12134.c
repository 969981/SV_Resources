/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00d12134; name: FUN_00d12134
 */


void FUN_00d12134(float param_1,undefined8 param_2,long param_3,long *param_4,undefined8 param_5)

{
  short *psVar1;
  short sVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  
  if (*(char *)(param_3 + 0x60) == '\0') {
    return;
  }
  fVar3 = *(float *)(param_3 + 0x104);
  fVar5 = *(float *)(param_3 + 0x108);
  psVar1 = (short *)(param_3 + 0x1d4);
  if (*(long *)(param_3 + 0x1f0) != *(long *)(param_3 + 0x1f8)) {
    psVar1 = (short *)(*(long *)(param_3 + 0x1f8) + -2);
  }
  sVar2 = *psVar1;
  if (*(char *)(param_3 + 0x1c0) == '\0') {
    uVar4 = *(undefined8 *)(param_3 + 0x260);
  }
  else {
    uVar4 = FUN_01a87174(param_3,*param_4,sVar2);
  }
  param_1 = fVar3 * fVar5 * param_1;
  uVar4 = CONCAT44((float)((ulong)uVar4 >> 0x20) +
                   ((float)((ulong)*(undefined8 *)(*param_4 + 0x410) >> 0x20) -
                   (float)((ulong)param_2 >> 0x20)),
                   (float)uVar4 + ((float)*(undefined8 *)(*param_4 + 0x410) - (float)param_2));
  if (((*(short *)(param_3 + 0x1d0) != -1) && (*(short *)(param_3 + 0x1d2) != -1)) &&
     (*(short *)(param_3 + 0x1d4) != -1)) {
    FUN_00d13618(uVar4,*(undefined8 *)(param_3 + 0xf0),*(undefined4 *)(param_3 + 0x100),param_1,
                 param_3 + 0x1e0);
  }
  if (*(long *)(param_3 + 0x228) == *(long *)(param_3 + 0x230)) {
    if (*(long *)(param_3 + 0x1f0) != *(long *)(param_3 + 0x1f8)) {
      FUN_00d18520(uVar4,param_1 * *(float *)(param_3 + 0x174),*(undefined4 *)(param_3 + 0x1b8),
                   *param_4,param_3 + 0x1f0,*(undefined4 *)(param_3 + 0x1bc),param_5);
    }
  }
  else {
    FUN_00d177c0(param_1 * *(float *)(param_3 + 0x174),*(undefined4 *)(param_3 + 0x1b8),*param_4,
                 param_3 + 0x228,*(undefined4 *)(param_3 + 0x1bc),param_5);
  }
  FUN_00d122e0(param_1,*param_4,0,0,0,sVar2,param_3 + 0x110);
  return;
}


