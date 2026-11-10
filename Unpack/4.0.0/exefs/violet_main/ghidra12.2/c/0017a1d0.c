/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0017a1d0; name: FUN_0017a1d0
 */


undefined8
FUN_0017a1d0(float param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
            long param_6,long param_7,float *param_8,undefined8 param_9)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  undefined1 *__s;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_6b8 [24];
  undefined8 local_6a0;
  ulong *local_698;
  int *piStack_690;
  ulong local_688;
  long local_680;
  ulong local_678 [64];
  int local_478 [256];
  undefined1 auStack_78 [8];
  
  if (0x1f < param_5) {
    uVar15 = param_5 - 5;
    pbVar3 = (byte *)(param_4 + uVar15);
    fVar17 = *param_8;
    *(int *)(param_6 + (ulong)*pbVar3 * 4) = *(int *)(param_6 + (ulong)*pbVar3 * 4) + -1;
    lVar7 = (ulong)*(byte *)(param_4 + param_5 + -4) * 4;
    *(int *)(param_6 + lVar7) = *(int *)(param_6 + lVar7) + -1;
    lVar7 = (ulong)*(byte *)(param_4 + param_5 + -3) * 4;
    *(int *)(param_6 + lVar7) = *(int *)(param_6 + lVar7) + -1;
    lVar7 = (ulong)*(byte *)(param_4 + param_5 + -2) * 4;
    *(int *)(param_6 + lVar7) = *(int *)(param_6 + lVar7) + -1;
    lVar7 = (ulong)*(byte *)(param_4 + param_5 + -1) * 4;
    *(int *)(param_6 + lVar7) = *(int *)(param_6 + lVar7) + -1;
    iVar4 = FUN_001560d0((float)(uVar15 & 0xffffffff));
    uVar10 = iVar4 - 2;
    if (10 < (int)uVar10) {
      uVar10 = 0xb;
    }
    if ((int)uVar10 < 9) {
      uVar10 = 8;
    }
    iVar4 = 1 << (ulong)(uVar10 & 0x1f);
    lVar7 = 0;
    puVar14 = auStack_78;
    lVar11 = 0xff;
    do {
      lVar13 = lVar11;
      __s = puVar14;
      lVar9 = lVar7;
      if (lVar13 == -1) break;
      lVar7 = lVar9 + 0x100000000;
      puVar14 = __s + -4;
      lVar11 = lVar13 + -1;
    } while (*(int *)(param_6 + lVar13 * 4) == 0);
    uVar2 = lVar13 + 1;
    iVar5 = FUN_0015e3e0(local_478,iVar4,param_6,uVar15 & 0xffffffff,uVar2 & 0xffffffff);
    *(int *)(param_6 + (ulong)*pbVar3 * 4) = *(int *)(param_6 + (ulong)*pbVar3 * 4) + 1;
    lVar7 = (ulong)*(byte *)(param_4 + param_5 + -4) * 4;
    *(int *)(param_6 + lVar7) = *(int *)(param_6 + lVar7) + 1;
    lVar7 = (ulong)*(byte *)(param_4 + param_5 + -3) * 4;
    *(int *)(param_6 + lVar7) = *(int *)(param_6 + lVar7) + 1;
    lVar7 = (ulong)*(byte *)(param_4 + param_5 + -2) * 4;
    *(int *)(param_6 + lVar7) = *(int *)(param_6 + lVar7) + 1;
    lVar7 = (ulong)*(byte *)(param_4 + param_5 + -1) * 4;
    *(int *)(param_6 + lVar7) = *(int *)(param_6 + lVar7) + 1;
    if (1 < iVar5) {
      fVar16 = (float)(**(code **)(param_7 + 0x58))(uVar15,(long)iVar5,(long)iVar4);
      lVar7 = (long)(fVar17 - (fVar16 * param_1 + 5.0));
      if (3 < lVar7) {
        memset(__s,0,lVar9 >> 0x1e);
        piStack_690 = local_478;
        local_688 = (ulong)(int)(uVar10 - 8);
        local_680 = 0x3c;
        local_698 = local_678;
        FUN_0017caa0(&local_698,uVar10,local_478,uVar2 & 0xffffffff,iVar5);
        uVar12 = 0x3f - local_680;
        uVar8 = local_688 << (local_680 + 1U & 0x3f);
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        *local_698 = uVar8 >> 0x20 | uVar8 << 0x20;
        local_698 = (ulong *)((long)local_698 + ((long)uVar12 >> 3));
        local_680 = local_680 + (uVar12 & 0xfffffffffffffff8);
        lVar11 = 0x3f - local_680;
        if (0 < lVar11) {
          uVar1 = (int)local_680 + 1;
          uVar8 = (ulong)uVar1 & 7;
          if ((uVar1 & 7) != 0) {
            local_680 = local_680 - uVar8;
            local_688 = local_688 << uVar8;
            lVar11 = 0x3f - local_680;
          }
          if (7 < lVar11) {
            do {
              *(char *)local_698 = (char)(local_688 >> (0x37U - local_680 & 0x3f));
              lVar11 = 0x37 - local_680;
              local_680 = local_680 + 8;
              local_698 = (ulong *)((long)local_698 + 1);
              local_688 = local_688 & *(uint *)(PTR_DAT_047cb910 + lVar11 * 4);
            } while (7 < lVar11);
          }
        }
        lVar11 = 0x4d - local_680;
        if (-1 < 0x46 - local_680) {
          lVar11 = 0x46 - local_680;
        }
        puVar14 = (undefined1 *)((long)local_698 + ((lVar11 >> 3) - (long)local_678));
        if (0 < (int)uVar2) {
          lVar11 = 0;
          lVar9 = 0;
          while( true ) {
            if (local_478[0] != 0) {
              lVar9 = lVar9 + (long)*(int *)(PTR_DAT_047cb918 +
                                            (ulong)(uint)(local_478[0] <<
                                                         (ulong)(0xd - uVar10 & 0x1f)) * 4) *
                              (ulong)*(uint *)(param_6 + lVar11 * 4);
            }
            if (uVar2 == lVar11 + 1U) break;
            lVar11 = lVar11 + 1;
            local_478[0] = local_478[lVar11];
          }
          puVar14 = puVar14 + (lVar9 >> 0x10);
        }
        if ((long)puVar14 < lVar7) {
          uVar6 = FUN_0017ba10(uVar10);
          FUN_0015c528(auStack_6b8,uVar6,param_9,&local_6a0);
          uVar6 = FUN_0017ba50(local_6a0,uVar6,uVar10);
          FUN_0017bad0(uVar6,local_478,uVar2 & 0xffffffff);
                    /* WARNING: Could not emulate address calculation at 0x0017a634 */
                    /* WARNING: Treating indirect jump as call */
          uVar6 = (*(code *)(&UNK_0017a670 +
                            (ulong)(byte)(&DAT_03cbfba0)[(uint)((int)uVar15 % 10)] * 4))
                            (pbVar3 + -1,0,0,0,0,0,0,0,0);
          return uVar6;
        }
      }
    }
  }
  return 0xffffffffffffffff;
}


