/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034acffc; name: FUN_034acffc
 */


void FUN_034acffc(long param_1,long param_2,long *param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  byte *pbVar6;
  long *plVar7;
  long lVar8;
  ulong unaff_x19;
  byte *pbVar9;
  float *pfVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_047e7180;
  pbVar6 = *(byte **)(param_2 + 0x18);
  if (pbVar6 == (byte *)0x0) {
    pbVar9 = (byte *)0x0;
    pfVar10 = (float *)0x0;
    pbVar6 = (byte *)0x0;
    goto LAB_034ad078;
  }
  pbVar9 = pbVar6 + 1;
  pfVar10 = (float *)(pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc));
LAB_034ad06c:
  pbVar6 = pbVar6 + (ulong)*pbVar6 + 1;
LAB_034ad078:
  do {
    if (pbVar9 == pbVar6) {
      return;
    }
    bVar3 = *pbVar9;
    if (bVar3 == 0xb) {
      if (*pfVar10 != 1.0) {
        plVar5 = (long *)*param_3;
        uVar2 = *(uint *)(param_3 + 1);
        unaff_x19 = unaff_x19 & 0xffffffffffffff00 | (ulong)(*(long *)(param_1 + 0x70) == param_2) |
                    0x2c;
        plVar7 = plVar5;
        if (uVar2 == 0) {
LAB_034ad148:
          if (plVar7 != plVar5 + (ulong)uVar2 * 3) {
            *(float *)(plVar7 + 2) = *pfVar10;
            goto LAB_034ad1e0;
          }
        }
        else {
          lVar8 = (ulong)uVar2 * 0x18;
          do {
            if ((*plVar7 == param_1) &&
               ((*(long *)(param_1 + 0x70) == param_2) != ((*(byte *)(plVar7 + 1) & 1) == 0)))
            goto LAB_034ad148;
            lVar8 = lVar8 + -0x18;
            plVar7 = plVar7 + 3;
          } while (lVar8 != 0);
        }
        uVar11 = *(uint *)((long)param_3 + 0xc);
        if (uVar11 <= uVar2) {
          iVar1 = uVar11 + (uVar11 >> 1);
          if (uVar11 == 0) {
            iVar1 = 1;
          }
          uVar11 = iVar1 + uVar11;
          plVar5 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x20))(0,plVar5,(ulong)uVar11 * 0x18);
          if (plVar5 == (long *)0x0) goto LAB_034ad1e0;
          *param_3 = (long)plVar5;
          *(uint *)((long)param_3 + 0xc) = uVar11;
        }
        if (uVar2 < uVar11) {
          uVar2 = *(uint *)(param_3 + 1);
          *(uint *)(param_3 + 1) = uVar2 + 1;
          if (plVar5 != (long *)0x0) {
            plVar5 = plVar5 + (ulong)uVar2 * 3;
            *plVar5 = param_1;
            plVar5[1] = unaff_x19;
            *(float *)(plVar5 + 2) = *pfVar10;
          }
        }
      }
    }
    else if (((*(uint *)(param_4 + ((ulong)(bVar3 >> 3) & 0x1c) + 0x80) >> ((ulong)bVar3 & 0x1f) & 1
              ) != 0) && (uVar2 = *(uint *)(puVar4 + (ulong)(uint)bVar3 * 4), uVar2 != 0x1b)) {
      *(float *)(param_4 + (ulong)uVar2 * 4) = *(float *)(param_4 + (ulong)uVar2 * 4) + *pfVar10;
    }
LAB_034ad1e0:
    pbVar6 = *(byte **)(param_2 + 0x18);
    pbVar9 = pbVar9 + 1;
    pfVar10 = pfVar10 + 4;
    if (pbVar6 != (byte *)0x0) goto LAB_034ad06c;
    pbVar6 = (byte *)0x0;
  } while( true );
}


