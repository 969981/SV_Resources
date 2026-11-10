/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003fa690; name: FUN_003fa690
 */


bool FUN_003fa690(undefined8 param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  long lVar7;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  int iStack_64;
  
  iVar2 = FUN_003f9c90(&local_78);
  if (iVar2 == 0) {
    FUN_003e8f00(param_1,"Bad time value",0xe);
    bVar1 = false;
  }
  else {
    lVar4 = *(long *)(param_2 + 2);
    iVar2 = *param_2;
    pcVar6 = " GMT";
    if (*(char *)(iVar2 + lVar4 + -1) != 'Z') {
      pcVar6 = "";
    }
    if (param_2[1] == 0x18) {
      if ((iVar2 < 0x10) || (pcVar6 = (char *)(lVar4 + 0xe), *pcVar6 != '.')) {
        pcVar6 = (char *)0x0;
        uVar5 = 0;
      }
      else {
        uVar5 = (ulong)(iVar2 - 0xe);
        lVar7 = 0;
        do {
          iVar2 = FUN_003f6e70(*(undefined1 *)(lVar4 + 0xf + lVar7));
          if (iVar2 == 0) {
            uVar5 = (ulong)((int)lVar7 + 1);
            break;
          }
          lVar7 = lVar7 + 1;
        } while (uVar5 - 1 != lVar7);
      }
      pcVar3 = "%s %2d %02d:%02d:%02d%.*s %d%s";
    }
    else {
      pcVar3 = "%s %2d %02d:%02d:%02d %d%s";
      uVar5 = (ulong)(iStack_64 + 0x76c);
    }
    iVar2 = FUN_003e6880(param_1,pcVar3,&UNK_03ce0450 + (long)local_68 * 4,uStack_6c,local_70,
                         uStack_74,local_78,uVar5,pcVar6);
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}


