/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0048ee30; name: FUN_0048ee30
 */


ulong FUN_0048ee30(undefined8 param_1)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  uint uVar11;
  size_t sVar12;
  int *piVar13;
  undefined8 uVar14;
  size_t __n;
  int iVar15;
  undefined8 local_a8;
  undefined1 auStack_a0 [15];
  char local_91 [17];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  iVar4 = FUN_0047e430();
  puVar3 = PTR_DAT_047cd5f8;
  if (0 < iVar4) {
    iVar4 = 0;
    do {
      puVar7 = (undefined8 *)FUN_0047e450(param_1,iVar4);
      if (*(int *)puVar7[1] == 1) {
        uVar14 = *(undefined8 *)((int *)puVar7[1] + 2);
        if ((((puVar7 == (undefined8 *)0x0) || (piVar13 = (int *)*puVar7, piVar13 == (int *)0x0)) ||
            (*(ushort **)(piVar13 + 2) == (ushort *)0x0)) || (*piVar13 < 2)) {
          __n = 0;
        }
        else {
          uVar11 = (uint)**(ushort **)(piVar13 + 2);
          uVar2 = ((uVar11 & 0xff00) << 8 | uVar11 << 0x18) >> 0x10;
          uVar11 = 0x10;
          if (uVar2 != 2) {
            uVar11 = (uint)(uVar2 == 1) << 2;
          }
          __n = (size_t)uVar11;
        }
        FUN_0047e4d0(uVar14);
        iVar5 = FUN_0047e430(uVar14);
        if (1 < iVar5) {
          iVar5 = 0;
          do {
            uVar8 = FUN_0047e450(uVar14,iVar5);
            iVar15 = iVar5 + 1;
            uVar9 = FUN_0047e450(uVar14,iVar15);
            iVar6 = FUN_0048e760(uVar8,auStack_70,auStack_80,__n);
            if (iVar6 == 0) {
              return 0;
            }
            iVar6 = FUN_0048e760(uVar9,local_91 + 1,auStack_a0,__n);
            if (iVar6 == 0) {
              return 0;
            }
            iVar6 = memcmp(auStack_70,auStack_80,__n);
            if (0 < iVar6) {
              return 0;
            }
            iVar6 = memcmp(local_91 + 1,auStack_a0,__n);
            if (0 < iVar6) {
              return 0;
            }
            iVar6 = memcmp(auStack_80,local_91 + 1,__n);
            if (-1 < iVar6) {
              return 0;
            }
            sVar12 = __n;
            do {
              if ((long)sVar12 < 1) break;
              cVar1 = local_91[sVar12];
              local_91[sVar12] = cVar1 + -1;
              sVar12 = sVar12 - 1;
            } while (cVar1 == '\0');
            iVar6 = memcmp(auStack_80,local_91 + 1,__n);
            if (iVar6 == 0) {
              uVar10 = FUN_0048e4f0(&local_a8,auStack_70,auStack_a0,__n);
              if ((int)uVar10 == 0) {
                return uVar10;
              }
              FUN_0047e480(uVar14,iVar5,local_a8);
              FUN_0047e170(uVar14,iVar15);
              FUN_003e4550(uVar8,puVar3);
              FUN_003e4550(uVar9,puVar3);
              iVar15 = iVar5;
            }
            iVar6 = FUN_0047e430(uVar14);
            iVar5 = iVar15;
          } while (iVar15 < iVar6 + -1);
        }
        iVar5 = FUN_0047e430(uVar14);
        piVar13 = (int *)FUN_0047e450(uVar14,iVar5 + -1);
        if ((piVar13 != (int *)0x0) && (*piVar13 == 1)) {
          uVar10 = FUN_0048e760(piVar13,auStack_70,auStack_80,__n);
          if ((int)uVar10 == 0) {
            return uVar10;
          }
          iVar5 = memcmp(auStack_70,auStack_80,__n);
          if (0 < iVar5) {
            return 0;
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = FUN_0047e430(param_1);
    } while (iVar4 < iVar5);
  }
  FUN_0047d9e0(param_1,&LAB_0048ec40);
  FUN_0047e4d0(param_1);
  iVar4 = FUN_0048e940(param_1);
  return (ulong)(iVar4 != 0);
}


