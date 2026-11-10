/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01527ebc; name: FUN_01527ebc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01527ebc(float param_1,long *param_2,undefined8 *param_3,ulong param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = _UNK_03caba58;
  uVar2 = _DAT_03caba50;
  if (10 < param_4) {
    return;
  }
  fVar7 = param_1 * 0.5;
  *(undefined1 *)((long)param_2 + 0xf9) = 0;
  uVar9 = param_3[1];
  uVar8 = *param_3;
  *(float *)(param_2 + 0x22) = param_1;
  *(char *)(param_2 + 0x24) = (char)param_4;
  param_2[0x21] =
       CONCAT44((float)((ulong)uVar9 >> 0x20) + (float)((ulong)uVar3 >> 0x20) * fVar7,
                (float)uVar9 + (float)uVar3 * fVar7);
  param_2[0x20] =
       CONCAT44((float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar2 >> 0x20) * fVar7,
                (float)uVar8 + (float)uVar2 * fVar7);
  param_2[0x25] = 3;
  *(float *)(param_2 + 0x23) = (param_1 / (float)(1 << (ulong)((uint)param_4 & 0x1f))) * 0.5;
  (**(code **)(*param_2 + 0x98))();
  cVar1 = *(char *)((long)param_2 + 0xf9);
  if (cVar1 == '\x01') {
    uVar4 = (ulong)*(byte *)(param_2 + 0x24);
    lVar5 = 1L << (uVar4 & 0x3f);
  }
  else {
    if (cVar1 == '\x02') {
      uVar6 = (ulong)*(byte *)((long)param_2 + 0x121);
      uVar4 = (ulong)*(byte *)(param_2 + 0x24);
    }
    else {
      if (cVar1 != '\0') {
        return;
      }
      uVar4 = (ulong)*(byte *)(param_2 + 0x24);
      uVar6 = uVar4;
    }
    lVar5 = (1L << (uVar6 & 0x3f)) << (uVar4 & 0x3f);
  }
  FUN_015276d4(param_2 + 0x2d,lVar5 << (uVar4 & 0x3f));
  return;
}


