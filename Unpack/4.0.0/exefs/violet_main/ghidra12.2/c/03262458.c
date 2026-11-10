/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03262458; name: FUN_03262458
 */


void FUN_03262458(long param_1,undefined8 param_2,uint param_3)

{
  void *__s;
  ulong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = (ulong)param_3;
    __s = (void *)(param_1 + 0x40);
    do {
      *(undefined8 *)((long)__s + -0x40) = 0;
      *(undefined8 *)((long)__s + -0x38) = 0;
      *(undefined8 *)((long)__s + -0x10) = 0;
      *(undefined1 *)((long)__s + -4) = 0;
      *(undefined8 *)((long)__s + -0x28) = 0x7f7fffee7f7fffee;
      *(undefined8 *)((long)__s + -0x30) = 0x7f7fffee7f7fffee;
      *(undefined8 *)((long)__s + -0x18) = 0xff7fffeeff7fffee;
      *(undefined8 *)((long)__s + -0x20) = 0xff7fffeeff7fffee;
      memset(__s,0,0x60);
      uVar1 = uVar1 - 1;
      __s = (void *)((long)__s + 0xa0);
    } while (uVar1 != 0);
  }
  return;
}


