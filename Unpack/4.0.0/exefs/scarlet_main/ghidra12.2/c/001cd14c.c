/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 001cd14c; name: FUN_001cd14c
 */


void FUN_001cd14c(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  lVar3 = 0;
  do {
    cVar1 = param_1[lVar3];
    if ((cVar1 == '\"') || (cVar1 == '\\')) {
      lVar2 = lVar2 + 1;
    }
    else if (cVar1 == '\0') {
      lVar2 = FUN_001ec2f8(lVar2 + lVar3 + 1);
      if (lVar2 == 0) {
        return;
      }
      lVar3 = 0;
      do {
        cVar1 = *param_1;
        if ((cVar1 == '\"') || (cVar1 == '\\')) {
          *(undefined1 *)(lVar2 + lVar3) = 0x5c;
          cVar1 = *param_1;
          lVar3 = lVar3 + 1;
        }
        else if (cVar1 == '\0') {
          *(undefined1 *)(lVar2 + lVar3) = 0;
          return;
        }
        *(char *)(lVar2 + lVar3) = cVar1;
        lVar3 = lVar3 + 1;
        param_1 = param_1 + 1;
      } while( true );
    }
    lVar3 = lVar3 + 1;
  } while( true );
}


