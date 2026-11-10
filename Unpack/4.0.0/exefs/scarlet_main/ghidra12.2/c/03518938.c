/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03518938; name: FUN_03518938
 */


void FUN_03518938(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 unaff_x21;
  undefined4 unaff_w22;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *local_80;
  undefined8 *local_78;
  char local_70 [4];
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar6 = DAT_048d2048;
  local_80 = DAT_048d2048;
  local_78 = (undefined8 *)0x0;
  if (DAT_048d2048 == (undefined8 *)0x0) {
    if ((DAT_00000010 & 1) != 0) {
      DAT_00000010 = DAT_00000010 & 0xfd;
      return;
    }
  }
  else {
    if (DAT_048d2048 + 1 != param_1) {
      do {
        local_78 = local_80;
        local_80 = (undefined8 *)*local_78;
        if (local_80 == (undefined8 *)0x0) break;
      } while (local_80 + 1 != param_1);
    }
    if ((*(byte *)(local_80 + 2) & 1) != 0) {
      *(byte *)(local_80 + 2) = *(byte *)(local_80 + 2) & 0xfd;
      puVar3 = PTR_DAT_047e2fd0;
      puVar7 = (undefined8 *)0x0;
      do {
        puVar11 = (undefined8 *)*puVar6;
        if ((*(byte *)(puVar6 + 2) >> 1 & 1) == 0) {
          puVar1 = &DAT_048d2048;
          if (DAT_048d2048 != puVar6) {
            puVar1 = puVar7;
          }
          *puVar1 = puVar11;
          if (DAT_048d2050 == puVar6) {
            DAT_048d2050 = puVar7;
          }
          if ((puVar6 < DAT_048d2060) || (DAT_048d2060 + (ulong)DAT_048d2068 * 3 <= puVar6)) {
            (**(code **)(puVar3 + 0x30))(0);
          }
          else {
            *puVar6 = DAT_048d2058;
            DAT_048d2058 = puVar6;
          }
          DAT_048d206c = DAT_048d206c + -1;
        }
        else {
          puVar7 = puVar6;
        }
        puVar6 = puVar11;
      } while (puVar11 != (undefined8 *)0x0);
      return;
    }
  }
  uVar2 = *(undefined4 *)(local_80 + 1);
  if (DAT_048d2010 != 0) {
    lVar9 = 0;
    lVar10 = 0;
    lVar8 = DAT_048d2010;
    do {
      if ((*(byte *)(lVar8 + 0x5a) & 0x11) == 1) {
        local_70[0] = '\0';
        lVar5 = FUN_0351f1f0(*(undefined8 *)(lVar8 + 0x60),uVar2,local_70,&local_6c,&local_68);
        if (local_70[0] != '\0') {
          if (lVar9 != 0) {
            if (lVar10 <= lVar5) goto LAB_03518a28;
          }
          unaff_x21 = local_68;
          lVar9 = lVar8;
          lVar10 = lVar5;
          unaff_w22 = local_6c;
        }
      }
LAB_03518a28:
      lVar8 = *(long *)(lVar8 + 0x70);
    } while (lVar8 != 0);
    if (((long)(ulong)*(ushort *)PTR_DAT_047e6d08 < lVar10) &&
       (iVar4 = FUN_0351f5e0(*(undefined8 *)(lVar9 + 0x60),param_1,unaff_w22,unaff_x21), iVar4 == 1)
       ) {
      return;
    }
  }
  FUN_03518b44(uVar2,&local_80);
  return;
}


