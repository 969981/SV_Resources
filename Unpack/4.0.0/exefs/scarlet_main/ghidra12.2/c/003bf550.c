/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003bf550; name: FUN_003bf550
 */


ushort * FUN_003bf550(undefined8 *param_1,int param_2,uint param_3,ulong *param_4)

{
  ushort *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  if (uVar2 != 0) {
    puVar1 = (ushort *)*param_1;
    if (param_2 == 2) {
      uVar3 = 0;
      do {
        if (*puVar1 == param_3) {
LAB_003bf5c4:
          if (param_4 == (ulong *)0x0) {
            return puVar1;
          }
          *param_4 = uVar3;
          return puVar1;
        }
        uVar3 = uVar3 + 1;
        puVar1 = puVar1 + 0x1c;
      } while (uVar3 < uVar2);
    }
    else {
      uVar3 = 0;
      do {
        if ((*puVar1 == param_3) &&
           ((*(int *)(puVar1 + 2) == param_2 || (*(int *)(puVar1 + 2) == 2)))) goto LAB_003bf5c4;
        uVar3 = uVar3 + 1;
        puVar1 = puVar1 + 0x1c;
      } while (uVar3 < uVar2);
    }
  }
  return (ushort *)0x0;
}


