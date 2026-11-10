/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001c3e7c; name: FUN_001c3e7c
 */


long FUN_001c3e7c(undefined8 param_1,char *param_2,long param_3,byte param_4)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  lVar7 = param_3;
  if (param_3 == 0) {
    lVar7 = FUN_001ec338(1,0x820);
    if (lVar7 == 0) {
      return 0;
    }
    pcVar4 = "none";
    if (param_2 != (char *)0x0) {
      pcVar4 = param_2;
    }
    lVar3 = FUN_001ec328(pcVar4);
    *(long *)(lVar7 + 0x800) = lVar3;
    if (lVar3 != 0) goto LAB_001c3eb0;
    FUN_001ec308();
    lVar3 = 0;
    bVar1 = true;
LAB_001c403c:
    FUN_001c501c(lVar7);
LAB_001c4044:
    lVar7 = 0;
    if ((bVar1) && (lVar3 != 0)) {
      FUN_001ed3c8(lVar3);
      lVar7 = 0;
    }
  }
  else {
LAB_001c3eb0:
    *(undefined1 *)(lVar7 + 0x808) = 0;
    if (param_2 == (char *)0x0) {
LAB_001c3ef4:
      *(byte *)(lVar7 + 0x818) = param_4 & 1;
    }
    else {
      iVar2 = strcmp(param_2,"-");
      if (iVar2 == 0) {
        lVar3 = *(long *)PTR_stdin_047cb840;
        bVar1 = false;
      }
      else {
        if (*param_2 == '\0') goto LAB_001c3ef4;
        lVar3 = FUN_001ed3ec(param_2,&DAT_03c53cd7);
        bVar1 = true;
      }
      *(byte *)(lVar7 + 0x818) = param_4 & 1;
      if (lVar3 != 0) {
        pcVar4 = (char *)FUN_001ec2f8(5000);
        if (pcVar4 == (char *)0x0) {
          FUN_001ec308();
          if (param_3 == 0) goto LAB_001c403c;
          goto LAB_001c4044;
        }
        lVar5 = FUN_001c4f8c(pcVar4,5000,lVar3);
        if (lVar5 != 0) {
          do {
            iVar2 = thunk_FUN_001e0a34("Set-Cookie:",pcVar4,0xb);
            pcVar6 = pcVar4;
            if (iVar2 != 0) {
              pcVar6 = pcVar4 + 0xb;
            }
            for (; *pcVar6 == ' ' || *pcVar6 == '\t'; pcVar6 = pcVar6 + 1) {
            }
            FUN_001c4060(param_1,lVar7,iVar2 != 0,1,pcVar6,0,0,1);
            lVar5 = FUN_001c4f8c(pcVar4,5000,lVar3);
          } while (lVar5 != 0);
        }
        FUN_001ec308(pcVar4);
        FUN_001c4e28(lVar7);
        if (bVar1) {
          FUN_001ed3c8(lVar3);
        }
      }
    }
    *(undefined1 *)(lVar7 + 0x808) = 1;
  }
  return lVar7;
}


