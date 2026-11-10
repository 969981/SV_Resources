/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0298ec40; name: FUN_0298ec40
 */


bool FUN_0298ec40(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  undefined1 *puVar3;
  
  if (param_1 == 2) {
    puVar3 = &DAT_03d6a45a;
joined_r0x0298ec88:
    if ((int)param_2 < 5) {
      cVar1 = puVar3[param_2];
    }
    else {
      cVar1 = '\x02';
    }
    if ((int)param_3 < 5) {
      cVar2 = puVar3[param_3];
      goto LAB_0298ec68;
    }
  }
  else {
    if (param_1 == 1) {
      puVar3 = &DAT_03d6a455;
      goto joined_r0x0298ec88;
    }
    if (param_1 == 0) {
      puVar3 = &DAT_03d6a450;
      goto joined_r0x0298ec88;
    }
    cVar1 = '\x02';
  }
  cVar2 = '\x02';
LAB_0298ec68:
  return cVar1 == cVar2;
}


