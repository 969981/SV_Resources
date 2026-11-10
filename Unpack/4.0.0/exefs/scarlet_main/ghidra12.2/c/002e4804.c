/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e4804; name: FUN_002e4804
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002e4804(ulong param_1)

{
  short sVar1;
  long *plVar2;
  undefined *puVar3;
  pthread_rwlock_t *__rwlock;
  int iVar4;
  ostream *this;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_170 [8];
  ostream aoStack_168 [264];
  
  __rwlock = DAT_047ef1d0;
  sVar1 = *(short *)(param_1 + 4);
  if (sVar1 != -1) {
    *(short *)(param_1 + 4) = sVar1 + -1;
    puVar3 = PTR_LAB_047cba48;
    if (sVar1 != 1) {
      return;
    }
    if (*(short *)(param_1 + 6) == 0) {
      FUN_002e4440(param_1);
      FUN_0049e790(PTR_LAB_047cba48,param_1);
      return;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    sVar1 = *(short *)(param_1 + 4);
    uVar10 = 0;
    do {
      uVar14 = uVar10;
      if (sVar1 != 0) {
        FUN_002cc810(auStack_170,"external/com_github_google_re2/re2/regexp.cc",0x93);
                    /* try { // try from 002e4b68 to 002e4b7f has its CatchHandler @ 002e4cc0 */
        this = std::__put_character_sequence<char,std::char_traits<char>>
                         (aoStack_168,"Bad reference count ",0x14);
        std::ostream::operator<<(this,*(ushort *)(param_1 + 4));
        FUN_002cc97c(auStack_170);
      }
      if (*(short *)(param_1 + 6) != 0) {
        puVar12 = (undefined8 *)(param_1 + 8);
        if (*(short *)(param_1 + 6) != 1) {
          puVar12 = (undefined8 *)*puVar12;
        }
        uVar10 = 0;
        do {
          uVar13 = puVar12[uVar10];
          if (uVar13 != 0) {
            sVar1 = *(short *)(uVar13 + 4);
            if (sVar1 == -1) {
              FUN_002e4804(uVar13);
              if (*(short *)(uVar13 + 4) == 0) goto LAB_002e4bfc;
            }
            else {
              *(short *)(uVar13 + 4) = sVar1 + -1;
              if (sVar1 == 1) {
LAB_002e4bfc:
                if (*(short *)(uVar13 + 6) == 0) {
                  FUN_002e4440(uVar13);
                  FUN_0049e790(puVar3,uVar13);
                }
                else {
                  *(ulong *)(uVar13 + 0x10) = uVar14;
                  uVar14 = uVar13;
                }
              }
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(ushort *)(param_1 + 6));
        if (1 < *(ushort *)(param_1 + 6)) {
          FUN_0049e800(puVar12);
          FUN_0049e7e0(puVar3,puVar12);
        }
        *(undefined2 *)(param_1 + 6) = 0;
      }
      FUN_002e4440(param_1);
      FUN_0049e790(puVar3,param_1);
      if (uVar14 == 0) {
        return;
      }
      sVar1 = *(short *)(uVar14 + 4);
      uVar10 = *(ulong *)(uVar14 + 0x10);
      param_1 = uVar14;
    } while( true );
  }
  iVar4 = pthread_rwlock_wrlock(DAT_047ef1d0);
  plVar2 = DAT_047ef1d8;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar7 = DAT_047ef1d8 + 1;
  plVar11 = (long *)*plVar7;
  if (plVar11 == (long *)0x0) {
    plVar8 = plVar7;
LAB_002e48b8:
    lVar9 = *plVar7;
    plVar11 = plVar7;
  }
  else {
    plVar7 = DAT_047ef1d8 + 1;
    while( true ) {
      while (plVar8 = plVar11, (ulong)plVar11[4] <= param_1) {
        if (param_1 <= (ulong)plVar11[4]) goto LAB_002e48b8;
        plVar7 = plVar11 + 1;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_002e48b8;
        plVar11 = (long *)*plVar7;
      }
      if ((long *)*plVar11 == (long *)0x0) break;
      plVar7 = plVar11;
      plVar11 = (long *)*plVar11;
    }
    lVar9 = *plVar11;
  }
  if (lVar9 == 0) {
    puVar12 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
    puVar12[4] = param_1;
    *(undefined4 *)(puVar12 + 5) = 0;
    puVar12[2] = plVar8;
    *puVar12 = 0;
    puVar12[1] = 0;
    *plVar11 = (long)puVar12;
    if (*(long *)*plVar2 == 0) {
      puVar5 = puVar12;
    }
    else {
      *plVar2 = *(long *)*plVar2;
      puVar5 = (undefined8 *)*plVar11;
    }
    FUN_010108e0(plVar2[1],puVar5);
    plVar2[2] = plVar2[2] + 1;
    iVar4 = *(int *)(puVar12 + 5);
    plVar2 = DAT_047ef1d8;
  }
  else {
    iVar4 = *(int *)(lVar9 + 0x28);
  }
  DAT_047ef1d8 = plVar2;
  if (iVar4 < 0x10000) {
    *(short *)(param_1 + 4) = (short)(iVar4 + -1);
    plVar2 = DAT_047ef1d8;
    plVar7 = DAT_047ef1d8 + 1;
    plVar11 = (long *)*plVar7;
    if (plVar11 != (long *)0x0) {
      plVar6 = plVar11;
      plVar8 = plVar7;
      do {
        if ((ulong)plVar6[4] >= param_1) {
          plVar8 = plVar6;
        }
        plVar6 = (long *)plVar6[(ulong)plVar6[4] < param_1];
      } while (plVar6 != (long *)0x0);
      if ((plVar8 != plVar7) && ((ulong)plVar8[4] <= param_1)) {
        plVar7 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) {
          plVar7 = plVar8 + 2;
          plVar6 = (long *)*plVar7;
          if ((long *)*plVar6 != plVar8) {
            do {
              lVar9 = *plVar7;
              plVar7 = (long *)(lVar9 + 0x10);
              plVar6 = (long *)*plVar7;
            } while (*plVar6 != lVar9);
          }
        }
        else {
          do {
            plVar6 = plVar7;
            plVar7 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        if ((long *)*DAT_047ef1d8 == plVar8) {
          *DAT_047ef1d8 = (long)plVar6;
        }
        plVar2[2] = plVar2[2] + -1;
        FUN_01336080(plVar11,plVar8);
        FUN_0049e790(PTR_LAB_047cba48,plVar8);
      }
    }
  }
  else {
    plVar7 = plVar2 + 1;
    plVar11 = (long *)*plVar7;
    if (plVar11 == (long *)0x0) {
      plVar8 = plVar7;
    }
    else {
      plVar7 = plVar2 + 1;
      while( true ) {
        while (plVar8 = plVar11, param_1 < (ulong)plVar11[4]) {
          if ((long *)*plVar11 == (long *)0x0) {
            puVar12 = (undefined8 *)*plVar11;
            goto joined_r0x002e49f8;
          }
          plVar7 = plVar11;
          plVar11 = (long *)*plVar11;
        }
        if (param_1 <= (ulong)plVar11[4]) break;
        plVar7 = plVar11 + 1;
        if ((long *)*plVar7 == (long *)0x0) break;
        plVar11 = (long *)*plVar7;
      }
    }
    puVar12 = (undefined8 *)*plVar7;
    plVar11 = plVar7;
joined_r0x002e49f8:
    if (puVar12 == (undefined8 *)0x0) {
      puVar12 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x30);
      puVar12[4] = param_1;
      *(undefined4 *)(puVar12 + 5) = 0;
      puVar12[2] = plVar8;
      *puVar12 = 0;
      puVar12[1] = 0;
      *plVar11 = (long)puVar12;
      if (*(long *)*plVar2 == 0) {
        puVar5 = puVar12;
      }
      else {
        *plVar2 = *(long *)*plVar2;
        puVar5 = (undefined8 *)*plVar11;
      }
      FUN_010108e0(plVar2[1],puVar5);
      plVar2[2] = plVar2[2] + 1;
    }
    *(int *)(puVar12 + 5) = iVar4 + -1;
  }
                    /* try { // try from 002e4a68 to 002e4a6f has its CatchHandler @ 002e4af4 */
  iVar4 = pthread_rwlock_unlock(__rwlock);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 002e4af0 to 002e4af3 has its CatchHandler @ 002e4af4 */
    abort();
  }
  return;
}


