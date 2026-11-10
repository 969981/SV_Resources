/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298c100; name: FUN_0298c100
 */


long FUN_0298c100(undefined8 param_1,long param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    uVar4 = FUN_01249340();
    bVar2 = FUN_0298c194(uVar4,param_2);
    if (param_3 != 1) {
      lVar6 = (ulong)param_3 - 1;
      lVar5 = param_2;
      do {
        lVar5 = lVar5 + 0x8c;
        uVar4 = FUN_01249340(param_1);
        bVar3 = FUN_0298c194(uVar4,lVar5);
        lVar1 = lVar5;
        if (bVar2 <= bVar3) {
          lVar1 = param_2;
          bVar3 = bVar2;
        }
        param_2 = lVar1;
        lVar6 = lVar6 + -1;
        bVar2 = bVar3;
      } while (lVar6 != 0);
    }
  }
  return param_2;
}


