/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f7dd0; name: FUN_001f7dd0
 */


ulong FUN_001f7dd0(long param_1,byte *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  puVar5 = PTR_DAT_047cba08;
  if (param_3 != 0) {
    uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) - *(long *)(*(long *)(param_1 + 8) + 0x20);
    uVar11 = 8;
    do {
      bVar3 = *param_2;
      if (uVar11 == 8) {
        if (uVar13 == 0) {
          uVar13 = FUN_001f4480(param_1,0);
          if ((int)uVar13 != 0) {
            return uVar13;
          }
          uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                   *(long *)(*(long *)(param_1 + 8) + 0x20);
        }
        else {
          **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = 0;
        }
      }
      uVar14 = (ulong)*(uint *)(puVar5 + (ulong)bVar3 * 8);
      uVar2 = *(uint *)((long)(puVar5 + (ulong)bVar3 * 8) + 4);
      uVar12 = uVar11 - uVar14;
      if (uVar11 < uVar14 || uVar12 == 0) {
        lVar8 = *(long *)(param_1 + 8);
        pbVar10 = *(byte **)(lVar8 + 0x20);
        if (uVar11 == uVar14) {
          *pbVar10 = *pbVar10 | (byte)uVar2;
          *(long *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + 1;
          uVar13 = uVar13 - 1;
          uVar12 = 8;
        }
        else {
          uVar14 = uVar14 - uVar11;
          *pbVar10 = *pbVar10 | (byte)(uVar2 >> (ulong)((uint)uVar14 & 0x1f));
          uVar1 = 0;
          if ((uVar14 & 7) != 0) {
            uVar1 = 8 - ((uint)uVar14 & 7);
          }
          uVar13 = uVar13 - 1;
          uVar2 = uVar2 << (ulong)(uVar1 & 0x1f);
          *(long *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + 1;
          if (uVar13 < uVar14 + 7 >> 3) {
            if (uVar14 < 0x19) {
              if (0x10 < uVar14) goto LAB_001f7f68;
              if (8 < uVar14) goto LAB_001f7fb0;
LAB_001f7fc4:
              if (uVar14 == 8) {
                iVar6 = FUN_001f442c();
                if (iVar6 != 0) goto LAB_001f8084;
                goto LAB_001f8064;
              }
              iVar6 = FUN_001f4480(param_1,uVar2);
              if (iVar6 == 0) {
                uVar12 = 8 - uVar14;
                uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                         *(long *)(*(long *)(param_1 + 8) + 0x20);
                goto LAB_001f7e8c;
              }
            }
            else {
              iVar6 = FUN_001f442c(param_1,uVar2 >> 0x18);
              if (iVar6 == 0) {
                uVar14 = uVar14 - 8;
LAB_001f7f68:
                iVar6 = FUN_001f442c(param_1,uVar2 >> 0x10);
                if (iVar6 == 0) {
                  uVar14 = uVar14 - 8;
LAB_001f7fb0:
                  iVar6 = FUN_001f442c(param_1,uVar2 >> 8);
                  if (iVar6 == 0) {
                    uVar14 = uVar14 - 8;
                    goto LAB_001f7fc4;
                  }
                }
              }
            }
LAB_001f8084:
            uVar12 = (ulong)iVar6;
            goto LAB_001f7e8c;
          }
          uVar4 = (undefined1)uVar2;
          if (uVar14 < 8) {
            **(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = uVar4;
            uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                     *(long *)(*(long *)(param_1 + 8) + 0x20);
            uVar12 = 8 - uVar14;
            goto LAB_001f7ec4;
          }
          if (uVar14 < 0x19) {
            if (0x10 < uVar14) goto LAB_001f7fe8;
            if (8 < uVar14) goto LAB_001f8004;
            plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
            puVar9 = (undefined1 *)*plVar7;
          }
          else {
            uVar14 = uVar14 - 8;
            puVar9 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar9 + 1;
            *puVar9 = (char)(uVar2 >> 0x18);
LAB_001f7fe8:
            uVar14 = uVar14 - 8;
            puVar9 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar9 + 1;
            *puVar9 = (char)(uVar2 >> 0x10);
LAB_001f8004:
            puVar9 = *(undefined1 **)(*(long *)(param_1 + 8) + 0x20);
            *(undefined1 **)(*(long *)(param_1 + 8) + 0x20) = puVar9 + 1;
            *puVar9 = (char)(uVar2 >> 8);
            plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
            puVar9 = (undefined1 *)*plVar7;
            if (uVar14 != 0x10) {
              *puVar9 = uVar4;
              uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                       *(long *)(*(long *)(param_1 + 8) + 0x20);
              uVar12 = 0x10 - uVar14;
              goto LAB_001f7e8c;
            }
          }
          *plVar7 = (long)(puVar9 + 1);
          *puVar9 = uVar4;
LAB_001f8064:
          uVar12 = 8;
          uVar13 = *(long *)(*(long *)(param_1 + 8) + 0x10) -
                   *(long *)(*(long *)(param_1 + 8) + 0x20);
        }
      }
      else {
        pbVar10 = *(byte **)(*(long *)(param_1 + 8) + 0x20);
        *pbVar10 = *pbVar10 | (byte)(uVar2 << (ulong)((uint)uVar12 & 0x1f));
LAB_001f7e8c:
        if ((long)uVar12 < 0) {
          return uVar12 & 0xffffffff;
        }
      }
LAB_001f7ec4:
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
      uVar11 = uVar12;
    } while (param_3 != 0);
    if ((long)uVar12 < 8) {
      lVar8 = *(long *)(param_1 + 8);
      **(byte **)(lVar8 + 0x20) =
           **(byte **)(lVar8 + 0x20) |
           (byte)(*(uint *)(puVar5 + 0x804) >>
                 (ulong)(*(int *)(puVar5 + 0x800) - (int)uVar12 & 0x1f));
      *(long *)(lVar8 + 0x20) = *(long *)(lVar8 + 0x20) + 1;
      return 0;
    }
  }
  return 0;
}


