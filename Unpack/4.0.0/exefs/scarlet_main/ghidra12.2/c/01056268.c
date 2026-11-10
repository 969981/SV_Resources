/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01056268; name: FUN_01056268
 */


bool FUN_01056268(char *param_1,char *param_2)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long local_40 [2];
  long local_30 [2];
  
  cVar1 = *param_1;
  if (cVar1 == *param_2) {
    if ((((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x02')) && (cVar1 != '\x03')) {
      return false;
    }
    bVar2 = *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
  }
  else {
    if ((cVar1 == '\x03') || (*param_2 == '\x03')) {
      FUN_025b6428(local_30);
      FUN_025b6428(local_40,param_2);
      FUN_019daa08(local_40);
      FUN_019daa08(local_30);
      return local_30[0] == local_40[0];
    }
    lVar3 = FUN_025b6514();
    lVar4 = FUN_025b6514(param_2);
    bVar2 = lVar3 == lVar4;
  }
  return bVar2;
}


