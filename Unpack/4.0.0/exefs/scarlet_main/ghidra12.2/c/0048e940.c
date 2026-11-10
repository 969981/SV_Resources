/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048e940; name: FUN_0048e940
 */


undefined8 FUN_0048e940(long param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  size_t sVar13;
  int *piVar14;
  size_t __n;
  undefined8 uVar15;
  undefined1 auStack_90 [15];
  char local_81 [17];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if (param_1 == 0) {
    return 1;
  }
  iVar6 = 0;
  while (iVar4 = FUN_0047e430(param_1), iVar6 < iVar4 + -1) {
    puVar8 = (undefined8 *)FUN_0047e450(param_1,iVar6);
    iVar6 = iVar6 + 1;
    puVar9 = (undefined8 *)FUN_0047e450(param_1,iVar6);
    iVar7 = *(int *)*puVar8;
    iVar1 = *(int *)*puVar9;
    iVar4 = iVar1;
    if (iVar7 - iVar1 == 0 || iVar7 < iVar1) {
      iVar4 = iVar7;
    }
    iVar5 = memcmp(*(void **)((int *)*puVar8 + 2),*(void **)((int *)*puVar9 + 2),(long)iVar4);
    iVar4 = iVar7 - iVar1;
    if (iVar5 != 0) {
      iVar4 = iVar5;
    }
    if (-1 < iVar4) {
      return 0;
    }
  }
  iVar6 = FUN_0047e430(param_1);
  if (iVar6 < 1) {
    return 1;
  }
  iVar6 = 0;
  do {
    puVar8 = (undefined8 *)FUN_0047e450(param_1,iVar6);
    if (puVar8 == (undefined8 *)0x0) {
      return 0;
    }
    piVar14 = (int *)*puVar8;
    if (((piVar14 == (int *)0x0) || (*(ushort **)(piVar14 + 2) == (ushort *)0x0)) || (*piVar14 < 2))
    {
      __n = 0;
      piVar14 = (int *)puVar8[1];
    }
    else {
      uVar12 = (uint)**(ushort **)(piVar14 + 2);
      uVar3 = ((uVar12 & 0xff00) << 8 | uVar12 << 0x18) >> 0x10;
      uVar12 = 0x10;
      if (uVar3 != 2) {
        uVar12 = (uint)(uVar3 == 1) << 2;
      }
      __n = (size_t)uVar12;
      piVar14 = (int *)puVar8[1];
    }
    if (piVar14 == (int *)0x0) {
      return 0;
    }
    if (*piVar14 != 0) {
      if (*piVar14 != 1) {
        return 0;
      }
      uVar15 = *(undefined8 *)(piVar14 + 2);
      uVar10 = FUN_0047e430(uVar15);
      if ((int)uVar10 == 0) {
        return uVar10;
      }
      iVar4 = FUN_0047e430(uVar15);
      if (1 < iVar4) {
        iVar4 = 0;
        do {
          piVar14 = (int *)FUN_0047e450(uVar15,iVar4);
          iVar4 = iVar4 + 1;
          uVar10 = FUN_0047e450(uVar15,iVar4);
          uVar11 = FUN_0048e760(piVar14,auStack_60,auStack_70,__n);
          if ((int)uVar11 == 0) {
            return uVar11;
          }
          uVar10 = FUN_0048e760(uVar10,local_81 + 1,auStack_90,__n);
          if ((int)uVar10 == 0) {
            return uVar10;
          }
          iVar7 = memcmp(auStack_60,local_81 + 1,__n);
          if (-1 < iVar7) {
            return 0;
          }
          iVar7 = memcmp(auStack_60,auStack_70,__n);
          if (0 < iVar7) {
            return 0;
          }
          iVar7 = memcmp(local_81 + 1,auStack_90,__n);
          if (0 < iVar7) {
            return 0;
          }
          sVar13 = __n;
          do {
            if ((long)sVar13 < 1) break;
            cVar2 = local_81[sVar13];
            local_81[sVar13] = cVar2 + -1;
            sVar13 = sVar13 - 1;
          } while (cVar2 == '\0');
          iVar7 = memcmp(auStack_70,local_81 + 1,__n);
          if (-1 < iVar7) {
            return 0;
          }
          if ((*piVar14 == 1) && (iVar7 = FUN_0048ec90(auStack_60,auStack_70,__n), -1 < iVar7)) {
            return 0;
          }
          iVar7 = FUN_0047e430(uVar15);
        } while (iVar4 < iVar7 + -1);
      }
      iVar4 = FUN_0047e430(uVar15);
      piVar14 = (int *)FUN_0047e450(uVar15,iVar4 + -1);
      if ((piVar14 != (int *)0x0) && (*piVar14 == 1)) {
        uVar10 = FUN_0048e760(piVar14,auStack_60,auStack_70,__n);
        if ((int)uVar10 == 0) {
          return uVar10;
        }
        iVar4 = memcmp(auStack_60,auStack_70,__n);
        if (0 < iVar4) {
          return 0;
        }
        iVar4 = FUN_0048ec90(auStack_60,auStack_70,__n);
        if (-1 < iVar4) {
          return 0;
        }
      }
    }
    iVar6 = iVar6 + 1;
    iVar4 = FUN_0047e430(param_1);
    if (iVar4 <= iVar6) {
      return 1;
    }
  } while( true );
}


