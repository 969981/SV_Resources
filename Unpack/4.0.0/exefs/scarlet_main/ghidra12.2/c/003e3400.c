/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 003e3400; name: FUN_003e3400
 */


int FUN_003e3400(uint *param_1,long *param_2)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *__dest;
  uint uVar6;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *param_1;
  if (0 < (int)uVar3) {
    if (((uint)*(undefined8 *)(param_1 + 4) >> 3 & 1) != 0) {
      uVar6 = (uint)*(undefined8 *)(param_1 + 4) & 7;
      goto LAB_003e3464;
    }
    lVar5 = *(long *)(param_1 + 2);
    uVar4 = (ulong)uVar3;
    do {
      uVar2 = uVar4 - 1;
      if ((long)uVar4 < 1) {
        uVar3 = 0;
        bVar1 = *(byte *)(lVar5 + -1);
        if ((bVar1 & 1) != 0) goto LAB_003e3450;
        goto LAB_003e34cc;
      }
      uVar4 = uVar2;
    } while (*(char *)(lVar5 + (uVar2 & 0xffffffff)) == '\0');
    uVar3 = (int)uVar2 + 1;
    bVar1 = *(byte *)(lVar5 + (int)uVar2);
    if ((bVar1 & 1) == 0) {
LAB_003e34cc:
      if ((bVar1 >> 1 & 1) == 0) {
        if ((bVar1 >> 2 & 1) == 0) {
          if ((bVar1 >> 3 & 1) == 0) {
            if ((bVar1 >> 4 & 1) == 0) {
              if ((bVar1 >> 5 & 1) == 0) {
                if ((bVar1 >> 6 & 1) == 0) {
                  uVar6 = -(uint)(bVar1 >> 7) & 7;
                }
                else {
                  uVar6 = 6;
                }
              }
              else {
                uVar6 = 5;
              }
            }
            else {
              uVar6 = 4;
            }
          }
          else {
            uVar6 = 3;
          }
        }
        else {
          uVar6 = 2;
        }
      }
      else {
        uVar6 = 1;
      }
      goto LAB_003e3464;
    }
  }
LAB_003e3450:
  uVar6 = 0;
LAB_003e3464:
  if (param_2 != (long *)0x0) {
    __dest = (undefined1 *)*param_2 + 1;
    *(undefined1 *)*param_2 = (char)uVar6;
    if (0 < (int)uVar3) {
      memcpy(__dest,*(void **)(param_1 + 2),(ulong)uVar3);
      __dest = __dest + uVar3;
      __dest[-1] = __dest[-1] & (byte)(0xff << (ulong)uVar6);
    }
    *param_2 = (long)__dest;
  }
  return uVar3 + 1;
}


