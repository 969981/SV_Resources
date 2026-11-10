/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00bfeb70; name: FUN_00bfeb70
 */


void FUN_00bfeb70(string *param_1,string *param_2,undefined8 *param_3,int param_4)

{
  byte *pbVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  long *plVar6;
  byte local_48 [16];
  ulong local_38;
  
  std::string::string(param_1,param_2);
  if (*(char *)((long)param_3 + 0x44) == '\0') {
    pbVar5 = (byte *)*param_3;
    pbVar1 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar1 = pbVar5 + 1;
    }
    std::string::append((char *)param_1,(ulong)pbVar1);
  }
  else {
    std::string::append((char *)param_1);
    pbVar5 = (byte *)param_3[1];
    pbVar1 = *(byte **)(pbVar5 + 0x10);
    if ((*pbVar5 & 1) == 0) {
      pbVar1 = pbVar5 + 1;
    }
    std::string::append((char *)param_1,(ulong)pbVar1);
    std::string::append((char *)param_1);
  }
  if (param_4 != -1) {
    std::string::append((char *)param_1);
    FUN_00c0ff30(local_48,param_4);
    uVar3 = (ulong)local_48 | 1;
    if ((local_48[0] & 1) != 0) {
      uVar3 = local_38;
    }
    std::string::append((char *)param_1,uVar3);
    if (((local_48[0] & 1) != 0) && (local_38 != 0)) {
      lVar4 = tpidr_el0;
      plVar6 = *(long **)(lVar4 + 0x30);
      if (plVar6 == (long *)0x0) {
        if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0)) {
          DAT_04859430 = DAT_04859418;
          __cxa_guard_release(&DAT_04859438);
        }
        plVar6 = DAT_04859430;
        *(long **)(lVar4 + 0x30) = DAT_04859430;
      }
      uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
      if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
        (**(code **)(*plVar6 + 0x18))(plVar6,local_38,0,8);
      }
      else {
        FUN_00c48fe8(plVar6,local_38,0,8);
      }
    }
    std::string::append((char *)param_1);
  }
  std::string::append((char *)param_1);
  return;
}


