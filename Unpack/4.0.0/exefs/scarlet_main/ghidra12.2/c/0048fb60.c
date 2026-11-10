/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0048fb60; name: FUN_0048fb60
 */


undefined8 FUN_0048fb60(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  uVar3 = 1;
  if ((param_2 != 0) && (param_1 != param_2)) {
    if (param_1 == 0) {
LAB_0048fc68:
      uVar3 = 0;
    }
    else {
      param_3 = param_3 & 0xffffffff;
      iVar1 = FUN_0047e430(param_2);
      if (iVar1 < 1) {
        uVar3 = 1;
      }
      else {
        iVar4 = 0;
        iVar1 = 0;
        do {
          uVar3 = FUN_0047e450(param_2,iVar4);
          iVar2 = FUN_0048e760(uVar3,auStack_70,auStack_80,param_3);
          if (iVar2 == 0) {
            return 0xffffffff;
          }
          iVar2 = FUN_0047e430(param_1);
          if (iVar2 <= iVar1) goto LAB_0048fc68;
          while( true ) {
            uVar3 = FUN_0047e450(param_1,iVar1);
            uVar3 = FUN_0048e760(uVar3,auStack_50,auStack_60,param_3);
            if ((int)uVar3 == 0) {
              return uVar3;
            }
            iVar2 = memcmp(auStack_60,auStack_80,param_3);
            if (-1 < iVar2) break;
            iVar1 = iVar1 + 1;
            iVar2 = FUN_0047e430(param_1);
            if (iVar2 <= iVar1) goto LAB_0048fc68;
          }
          iVar2 = memcmp(auStack_50,auStack_70,param_3);
          if (0 < iVar2) goto LAB_0048fc68;
          iVar4 = iVar4 + 1;
          iVar2 = FUN_0047e430(param_2);
          uVar3 = 1;
        } while (iVar4 < iVar2);
      }
    }
  }
  return uVar3;
}


