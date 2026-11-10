/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0058195c; name: FUN_0058195c
 */


byte * FUN_0058195c(long param_1,byte *param_2,long *param_3)

{
  ulong *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined1 auVar11 [12];
  
  puVar1 = (ulong *)(param_1 + 8);
LAB_0058197c:
  do {
    if ((byte *)*param_3 <= param_2) {
      if ((long)param_2 - param_3[1] == (long)*(int *)((long)param_3 + 0x1c)) {
        return param_2;
      }
      auVar9 = FUN_0052dd3c(param_3,param_2,*(undefined4 *)((long)param_3 + 0x5c));
      param_2 = auVar9._0_8_;
      if ((auVar9._8_8_ & 1) != 0) {
        return param_2;
      }
    }
    pbVar7 = param_2 + 1;
    uVar8 = (uint)*param_2;
    if ((char)*param_2 < '\0') {
      uVar8 = (uVar8 + (uint)*pbVar7 * 0x80) - 0x80;
      if (-1 < (char)*pbVar7) {
        pbVar7 = param_2 + 2;
        goto joined_r0x005819f8;
      }
      auVar11 = FUN_0052e560(param_2,uVar8);
      if (auVar11._0_8_ == 0) {
        return (byte *)0x0;
      }
    }
    else {
joined_r0x005819f8:
      auVar11._8_4_ = uVar8;
      auVar11._0_8_ = pbVar7;
    }
    uVar8 = auVar11._8_4_;
    pbVar7 = auVar11._0_8_;
    if (uVar8 == 10) {
      lVar6 = *(long *)(param_1 + 0x10);
      if (lVar6 == 0) {
        puVar5 = (ulong *)(*puVar1 & 0xfffffffffffffffe);
        if ((*puVar1 & 1) != 0) {
          puVar5 = (ulong *)*puVar5;
        }
        lVar6 = FUN_005854a4(puVar5);
        *(long *)(param_1 + 0x10) = lVar6;
        bVar3 = *pbVar7;
        if ((char)bVar3 < '\0') goto LAB_00581a3c;
LAB_00581a10:
        auVar10[8] = bVar3;
        auVar10._0_8_ = pbVar7 + 1;
        auVar10._9_3_ = 0;
      }
      else {
        bVar3 = *pbVar7;
        if (-1 < (char)bVar3) goto LAB_00581a10;
LAB_00581a3c:
        auVar10 = FUN_0052e5f0(pbVar7);
        if (auVar10._0_8_ == 0) {
          return (byte *)0x0;
        }
      }
      uVar8 = auVar10._8_4_ + (auVar10._0_4_ - (int)param_3[1]);
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
      lVar4 = param_3[0xb];
      iVar2 = *(int *)((long)param_3 + 0x1c);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *(int *)(param_3 + 0xb) = (int)lVar4 + -1;
      if ((int)lVar4 < 1) {
        return (byte *)0x0;
      }
      param_2 = (byte *)FUN_005782d0(lVar6,auVar10._0_8_,param_3);
      if (param_2 == (byte *)0x0) {
        return (byte *)0x0;
      }
      *(int *)(param_3 + 0xb) = (int)param_3[0xb] + 1;
      if ((int)param_3[10] != 0) {
        return (byte *)0x0;
      }
      uVar8 = *(int *)((long)param_3 + 0x1c) + (iVar2 - uVar8);
      *(uint *)((long)param_3 + 0x1c) = uVar8;
      *param_3 = param_3[1] + (long)(int)(uVar8 & (int)uVar8 >> 0x1f);
      goto LAB_0058197c;
    }
    if ((uVar8 == 0) || ((uVar8 & 7) == 4)) {
      *(uint *)(param_3 + 10) = uVar8 - 1;
      return pbVar7;
    }
    if ((*puVar1 & 1) == 0) {
      lVar6 = FUN_0021d48c(puVar1);
    }
    else {
      lVar6 = (*puVar1 & 0xfffffffffffffffe) + 8;
    }
    param_2 = (byte *)FUN_0052f000(uVar8,lVar6,pbVar7,param_3);
    if (param_2 == (byte *)0x0) {
      return (byte *)0x0;
    }
  } while( true );
}


