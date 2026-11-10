/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00be295c; name: FUN_00be295c
 */


void FUN_00be295c(long *param_1,long param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  string *psVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  string *psVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  
  uVar2 = *(uint *)(param_2 + 8);
  if (uVar2 != 0) {
    puVar12 = *(undefined8 **)(param_2 + 0x10);
    puVar8 = (undefined8 *)FUN_00c11f04(param_1,uVar2);
    lVar4 = param_1[1];
    iVar7 = *(int *)param_1[2];
    uVar3 = iVar7 - (int)lVar4;
    if ((0 < (int)uVar2) && (0 < (int)uVar3)) {
      uVar1 = (ulong)uVar2;
      if ((ulong)uVar3 - 1 <= (ulong)uVar2 - 1) {
        uVar1 = (ulong)uVar3;
      }
      lVar11 = -uVar1;
      puVar16 = puVar8;
      puVar15 = puVar12;
      do {
        puVar15 = puVar15 + 1;
        std::string::operator=((string *)*puVar16,(string *)*puVar15);
        bVar6 = lVar11 != -1;
        lVar11 = lVar11 + 1;
        puVar16 = puVar16 + 1;
      } while (bVar6);
    }
    puVar5 = PTR_LAB_047dabf0;
    if ((int)uVar3 < (int)uVar2) {
      lVar11 = *param_1;
      iVar14 = (int)lVar4 + uVar2;
      if (lVar11 == 0) {
        iVar14 = iVar14 - iVar7;
        lVar4 = tpidr_el0;
        puVar12 = puVar12 + (int)uVar3;
        puVar8 = puVar8 + (int)uVar3;
        do {
          puVar12 = puVar12 + 1;
          psVar9 = (string *)*puVar12;
          plVar10 = *(long **)(lVar4 + 0x30);
          if (plVar10 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar7 = __cxa_guard_acquire(&DAT_04859438), iVar7 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar10 = DAT_04859430;
            *(long **)(lVar4 + 0x30) = DAT_04859430;
          }
          psVar13 = (string *)(**(code **)(*plVar10 + 0x10))(plVar10,0x18,8);
          *(undefined8 *)(psVar13 + 0x10) = 0;
          *(undefined8 *)psVar13 = 0;
          *(undefined8 *)(psVar13 + 8) = 0;
          std::string::operator=(psVar13,psVar9);
          iVar14 = iVar14 + -1;
          *puVar8 = psVar13;
          puVar8 = puVar8 + 1;
        } while (iVar14 != 0);
      }
      else {
        puVar12 = puVar12 + (int)uVar3;
        iVar14 = iVar14 - iVar7;
        puVar8 = puVar8 + (int)uVar3;
        do {
          puVar12 = puVar12 + 1;
          psVar13 = (string *)*puVar12;
          psVar9 = (string *)FUN_00c0e238(lVar11,0,0x18);
          *(undefined8 *)psVar9 = 0;
          *(undefined8 *)(psVar9 + 8) = 0;
          *(undefined8 *)(psVar9 + 0x10) = 0;
          FUN_00c0e13c(lVar11,psVar9,puVar5);
          std::string::operator=(psVar9,psVar13);
          iVar14 = iVar14 + -1;
          *puVar8 = psVar9;
          puVar8 = puVar8 + 1;
        } while (iVar14 != 0);
      }
    }
    iVar7 = (int)param_1[1] + uVar2;
    *(int *)(param_1 + 1) = iVar7;
    if (*(int *)param_1[2] < iVar7) {
      *(int *)param_1[2] = iVar7;
    }
  }
  return;
}


