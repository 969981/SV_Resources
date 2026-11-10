/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e37f58; name: FUN_01e37f58
 */


bool FUN_01e37f58(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  
  if ((int)param_1[8] - 5U < 2) {
    bVar1 = true;
  }
  else if ((int)param_1[8] == 4) {
    cVar3 = FUN_011d775c(param_1);
    bVar1 = cVar3 != '\0';
  }
  else {
    if ((*(byte *)((long)param_1 + 0x45) & 1) == 0) {
      uVar4 = (**(code **)(*param_1 + 0x80))(param_1,param_1[0x21]);
      lVar5 = (*(code *)**(undefined8 **)*param_2)((undefined8 *)*param_2,uVar4);
      if (*(long *)(lVar5 + 8) == 0) {
        return false;
      }
      lVar5 = param_1[0x30] + 1;
      if (((*(byte *)(param_1 + 0x2d) & 1) == 0) && ((ulong)param_1[0x30] < (ulong)param_1[0x2e])) {
        param_1[0x30] = lVar5;
        return false;
      }
      param_1[0x30] = 0;
      if ((*(byte *)(param_1 + 0x2d) & 1) == 0) {
        if ((int)param_1[8] == 0) {
          if ((char)param_1[0x28] == '\0') {
            return false;
          }
          uVar7 = (**(code **)PTR_PTR_047d9ab8)(1,param_2);
          bVar2 = (**(code **)(*param_1 + 0x78))(param_1,PTR_s_S7C68FEDB79AB6396_047d9ac8,uVar7);
          *(undefined4 *)(param_1 + 8) = 1;
          *(undefined1 *)((long)param_1 + 0x44) = 1;
        }
        else {
          if (*(char *)((long)param_1 + 0x44) != '\0') {
            *(undefined1 *)((long)param_1 + 0x44) = 0;
          }
          plVar6 = (long *)(**(code **)PTR_PTR_047d9ab8)(lVar5,param_2);
          lVar5 = plVar6[1];
          param_1[0x32] = *plVar6;
          param_1[0x33] = lVar5;
          bVar2 = (**(code **)(*param_1 + 0x78))
                            (param_1,PTR_s_SE94F3E13286232CF_047d9ac0,param_1 + 0x32);
          *(undefined4 *)(param_1 + 8) = 2;
        }
        return (bool)(bVar2 & 1);
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


