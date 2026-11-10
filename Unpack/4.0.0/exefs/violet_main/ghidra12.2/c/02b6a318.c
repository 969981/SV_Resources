/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b6a318; name: FUN_02b6a318
 */


void FUN_02b6a318(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  char cVar7;
  byte bVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  ulong uVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 uVar16;
  bool bVar17;
  undefined8 uVar18;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  uint local_68;
  uint uStack_64;
  
  puVar15 = (uint *)param_1[1];
  puVar6 = (uint *)param_1[2];
  if (puVar15 == puVar6) {
LAB_02b6a5a8:
    return;
  }
  puVar1 = PTR_DAT_047dcc88 + 0x10;
  puVar2 = PTR_DAT_047dcc78 + 0x10;
  puVar3 = PTR_DAT_047dcc80 + 0x10;
  pcVar12 = *(code **)(PTR_DAT_047dcc70 + 0x20);
  bVar17 = true;
LAB_02b6a384:
  do {
    uVar18 = *(undefined8 *)(puVar15 + 2);
    uVar16 = *(undefined8 *)(puVar15 + 6);
    uStack_64 = *puVar15;
    puVar4 = PTR_DAT_047dcc70 + 0x10;
    local_70 = 0;
    local_68 = 0;
    local_d0 = puVar1;
    local_78 = puVar4;
    if (uStack_64 != 0) {
      uVar13 = (ulong)uStack_64 - ((ulong)(uStack_64 >> 1) & 0x5555555555555555);
      uStack_64 = uStack_64 ^ uStack_64 << 2;
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uStack_64 = uStack_64 ^ uStack_64 >> 0xf;
      uStack_64 = uStack_64 ^ uStack_64 << 0xd;
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (((uVar13 != 1) &&
          (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
          uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar13 != 2)) &&
         (uStack_64 = uStack_64 ^ uStack_64 << 2, uStack_64 = uStack_64 ^ uStack_64 >> 0xf,
         uStack_64 = uStack_64 ^ uStack_64 << 0xd, uVar13 != 3)) {
        (*pcVar12)(&local_78);
        for (lVar9 = uVar13 - 4; lVar9 != 0; lVar9 = lVar9 + -1) {
          (**(code **)(local_78 + 0x10))(&local_78);
        }
      }
    }
    local_88 = CONCAT44(uStack_64,uStack_64);
    local_a0 = 0;
    uStack_80 = 0;
    uStack_c0 = 0;
    local_c8 = puVar3;
    local_b8 = puVar2;
    uStack_b0 = uVar18;
    local_a8 = uVar16;
    local_98 = puVar4;
    uStack_90 = local_70;
    local_68 = uStack_64;
    uVar16 = FUN_015d1064(&local_d0);
    if ((char)puVar15[8] == '\0') {
      cVar7 = (char)puVar15[0xb];
      iVar11 = 1;
    }
    else {
      uVar10 = (uint)uVar16;
      if ((uint)(byte)puVar15[9] == (uVar10 & 0xff)) {
        if ((uVar10 & 0xff) == 5) {
          bVar8 = *(byte *)((long)puVar15 + 0x25);
          if (((bVar8 == 3) || ((byte)(bVar8 - 8) < 10)) &&
             ((uVar14 = (uint)((ulong)uVar16 >> 8), (uVar14 & 0xff) == 3 || (uVar14 - 8 & 0xff) < 10
              && ((uint)bVar8 == (uVar14 & 0xff))))) {
LAB_02b6a584:
            if ((*(char *)((long)puVar15 + 0x26) == '\0' && (uVar10 >> 0x10 & 0xff) == 0) ||
               (puVar15[10] == (uint)((ulong)uVar16 >> 0x20))) goto LAB_02b6a514;
          }
        }
        else if (((uVar10 - 8 & 0xff) < 10) || ((uVar10 - 3 & 0xff) < 2)) {
          if ((uVar10 & 0xff) == 4) goto LAB_02b6a584;
LAB_02b6a514:
          puVar15 = puVar15 + 0xc;
          if (puVar15 == puVar6) {
            if (bVar17) goto LAB_02b6a5a8;
            goto LAB_02b6a5c8;
          }
          goto LAB_02b6a384;
        }
      }
      cVar7 = (char)puVar15[0xb];
      iVar11 = 2;
    }
    iVar5 = -iVar11;
    if (cVar7 == '\0') {
      iVar5 = iVar11;
    }
    (**(code **)(*param_1 + 0x10))(param_1,puVar15,iVar5);
    puVar15 = puVar15 + 0xc;
    bVar17 = false;
    if (puVar15 == puVar6) {
LAB_02b6a5c8:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl
                ("bValidationResult","Validation",
                 "../../include\\pe/savedata/./hashdb/basic_storage.hpp",0x110,
                 "element type validation failed\n");
    }
  } while( true );
}


