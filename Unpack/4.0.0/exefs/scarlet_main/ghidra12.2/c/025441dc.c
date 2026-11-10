/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 025441dc; name: FUN_025441dc
 */


undefined1  [16] FUN_025441dc(char *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar5;
  undefined1 auVar4 [16];
  
  cVar1 = *param_1;
  uVar3 = 0;
  uVar5 = 0;
  if (cVar1 == '\x02') {
    if ((*(long *)(param_1 + 8) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar2 != 0)) {
      lVar2 = lVar2 + param_2;
      uVar5 = *(undefined8 *)(lVar2 + -0x20);
      uVar3 = *(undefined8 *)(lVar2 + -0x28);
    }
  }
  else if (((cVar1 == '\x01') || (cVar1 == '\0')) && (*(long *)(param_1 + 8) != 0)) {
    return *(undefined1 (*) [16])(*(long *)(param_1 + 8) + param_2);
  }
  auVar4._8_8_ = uVar5;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


