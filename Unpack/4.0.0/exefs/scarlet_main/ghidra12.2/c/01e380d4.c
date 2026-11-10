/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01e380d4; name: FUN_01e380d4
 */


bool FUN_01e380d4(long *param_1,undefined8 *param_2)

{
  bool bVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  long lVar5;
  long *plVar6;
  
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
      if (*(long *)(lVar5 + 8) != 0) {
        lVar5 = param_1[0x31] + 1;
        if (((*(byte *)((long)param_1 + 0x169) & 1) == 0) &&
           ((ulong)param_1[0x31] < (ulong)param_1[0x2f])) {
          param_1[0x31] = lVar5;
          return false;
        }
        param_1[0x31] = 0;
        if (((*(byte *)((long)param_1 + 0x169) & 1) == 0) && ((int)param_1[8] != 0)) {
          if (*(char *)((long)param_1 + 0x44) == '\0') {
            plVar6 = (long *)(**(code **)PTR_PTR_047d9ab8)(lVar5,param_2);
            lVar5 = plVar6[1];
            param_1[0x34] = *plVar6;
            param_1[0x35] = lVar5;
            bVar2 = (**(code **)(*param_1 + 0x78))
                              (param_1,PTR_s_S20A40E2F8B95D5F6_047d9ad0,param_1 + 0x34);
            *(undefined4 *)(param_1 + 8) = 3;
            return (bool)(bVar2 & 1);
          }
          *(undefined1 *)((long)param_1 + 0x44) = 0;
          return false;
        }
      }
    }
    bVar1 = false;
  }
  return bVar1;
}


