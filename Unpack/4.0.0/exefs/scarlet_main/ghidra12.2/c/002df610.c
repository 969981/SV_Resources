/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002df610; name: FUN_002df610
 */


char * FUN_002df610(char *param_1)

{
  undefined2 uVar1;
  ushort uVar2;
  char *pcVar3;
  undefined8 *__dest;
  char *pcVar4;
  
  pcVar4 = param_1;
  if (*param_1 != '\x02') {
    if ((*param_1 == '\x05') && (1 < *(ushort *)(param_1 + 6))) {
      __dest = *(undefined8 **)(param_1 + 8);
      if (*(char *)*__dest != '\x02') {
        FUN_002e4804();
        *__dest = 0;
        if (*(short *)(param_1 + 6) != 2) {
          uVar2 = *(short *)(param_1 + 6) - 1;
          *(ushort *)(param_1 + 6) = uVar2;
          memmove(__dest,__dest + 1,(ulong)uVar2 << 3);
          return param_1;
        }
        pcVar4 = (char *)__dest[1];
        __dest[1] = 0;
        FUN_002e4804(param_1);
      }
    }
    else {
      uVar1 = *(undefined2 *)(param_1 + 2);
      FUN_002e4804(param_1);
      pcVar3 = (char *)FUN_0049e770(PTR_FUN_047cba38,0x28);
      pcVar4 = (char *)0x0;
      if (pcVar3 != (char *)0x0) {
        FUN_002e4418(pcVar3,2,uVar1);
        return pcVar3;
      }
    }
  }
  return pcVar4;
}


