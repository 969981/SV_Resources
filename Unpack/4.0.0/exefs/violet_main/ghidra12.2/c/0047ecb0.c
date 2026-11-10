/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0047ecb0; name: FUN_0047ecb0
 */


undefined8 FUN_0047ecb0(long *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  code *pcVar8;
  
  if ((*(code **)(*param_1 + 8) == (code *)0x0) ||
     (iVar2 = (**(code **)(*param_1 + 8))(param_1), 0 < iVar2)) {
    if ((*(byte *)((long)param_1 + 0x21) & 1) != 0) {
      FUN_004820b0(&LAB_0047eee0,param_1);
    }
    iVar2 = FUN_0047e430(param_1[1]);
    lVar5 = *param_1;
    if (0 < iVar2) {
      iVar2 = 0;
      pcVar6 = "writing strings";
      do {
        pcVar8 = *(code **)(lVar5 + 0x10);
        if (pcVar8 != (code *)0x0) {
          uVar4 = FUN_0047e450(param_1[1],iVar2);
          iVar3 = (*pcVar8)(param_1,uVar4);
          if (iVar3 < 1) goto LAB_0047ee28;
        }
        iVar2 = iVar2 + 1;
        iVar3 = FUN_0047e430(param_1[1]);
        lVar5 = *param_1;
      } while (iVar2 < iVar3);
    }
    if (*(code **)(lVar5 + 0x18) == (code *)0x0) {
LAB_0047ed80:
      iVar2 = FUN_0047e430(param_1[1]);
      if (iVar2 < 1) {
        bVar1 = false;
        uVar4 = 0;
        pcVar6 = (char *)0x0;
        pcVar7 = "closing session";
      }
      else {
        iVar2 = 0;
        pcVar6 = "reading strings";
        do {
          pcVar8 = *(code **)(*param_1 + 0x20);
          if (pcVar8 != (code *)0x0) {
            uVar4 = FUN_0047e450(param_1[1],iVar2);
            iVar3 = (*pcVar8)(param_1,uVar4);
            if (iVar3 == 0) goto LAB_0047ee28;
            if (iVar3 == -1) goto LAB_0047edf0;
          }
          iVar2 = iVar2 + 1;
          iVar3 = FUN_0047e430(param_1[1]);
        } while (iVar2 < iVar3);
        bVar1 = false;
        uVar4 = 0;
        pcVar6 = (char *)0x0;
        pcVar7 = "closing session";
      }
      goto LAB_0047ee30;
    }
    iVar2 = (**(code **)(lVar5 + 0x18))(param_1);
    if (iVar2 == 0) {
      pcVar6 = "flushing";
      goto LAB_0047ee28;
    }
    if (iVar2 != -1) goto LAB_0047ed80;
LAB_0047edf0:
    pcVar6 = "processing";
    bVar1 = false;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    uVar4 = 0xfffffffe;
  }
  else {
    pcVar6 = "opening session";
LAB_0047ee28:
    uVar4 = 0xffffffff;
    bVar1 = true;
  }
  pcVar7 = pcVar6;
LAB_0047ee30:
  if (*(code **)(*param_1 + 0x28) == (code *)0x0) {
    if (!bVar1) {
      return uVar4;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (0 < iVar2) {
      pcVar7 = pcVar6;
    }
    pcVar6 = pcVar7;
    if (!bVar1 && 0 < iVar2) {
      return uVar4;
    }
  }
  FUN_004806c0(0x28,0x71,0x6b,"external/openssl/crypto/ui/ui_lib.c",0x221);
  FUN_00481380(2,"while ",pcVar6);
  return 0xffffffff;
}


