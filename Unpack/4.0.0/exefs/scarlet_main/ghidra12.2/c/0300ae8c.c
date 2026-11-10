/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0300ae8c; name: FUN_0300ae8c
 */


void FUN_0300ae8c(long *param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (0 < param_3) {
    lVar3 = (long)(int)param_2;
    lVar4 = (long)(int)(param_3 + param_2);
    lVar5 = ((-(ulong)(param_2 >> 0x1f) & 0xfffffffc00000000 | (ulong)param_2 << 2) +
            (long)(int)param_2) * 8;
    lVar6 = lVar3;
    do {
      lVar6 = lVar6 + 1;
      lVar1 = param_1[3] + lVar5;
      lVar5 = lVar5 + 0x28;
      *(undefined2 *)(lVar1 + 0x24) = 0;
      *(undefined1 *)(lVar1 + 0x14) = 0;
      *(undefined8 *)(lVar1 + 0x18) = 0xffffffff00ffffff;
      *(undefined1 *)(lVar1 + 0x26) = 0;
    } while (lVar6 < lVar4);
    lVar5 = lVar3 * 0x150;
    lVar6 = lVar3;
    do {
      lVar6 = lVar6 + 1;
      puVar2 = (undefined8 *)(param_1[5] + lVar5);
      lVar5 = lVar5 + 0x150;
      *(undefined4 *)((long)puVar2 + 0x14) = 0xff7fffee;
      puVar2[1] = 0x7f7fffee7f7fffee;
      *puVar2 = 0x7f7fffee7f7fffee;
      *(undefined8 *)((long)puVar2 + 0xc) = 0xff7fffeeff7fffee;
      *(undefined1 *)(puVar2 + 3) = 0xff;
    } while (lVar6 < lVar4);
    if (*(char *)(*param_1 + 0x15de) != '\0') {
      lVar6 = lVar3;
      do {
        *(undefined1 *)(param_1[7] + lVar6) = 0;
        lVar6 = lVar6 + 1;
      } while (lVar6 < lVar4);
      lVar5 = lVar3 * 0x28;
      lVar6 = lVar3;
      do {
        lVar6 = lVar6 + 1;
        lVar1 = param_1[0xb] + lVar5;
        lVar5 = lVar5 + 0x28;
        *(undefined2 *)(lVar1 + 0x24) = 0;
        *(undefined1 *)(lVar1 + 0x14) = 0;
        *(undefined8 *)(lVar1 + 0x18) = 0xffffffff00ffffff;
        *(undefined1 *)(lVar1 + 0x26) = 0;
      } while (lVar6 < lVar4);
      lVar6 = lVar3 * 0x150;
      do {
        lVar3 = lVar3 + 1;
        puVar2 = (undefined8 *)(param_1[0xd] + lVar6);
        lVar6 = lVar6 + 0x150;
        *(undefined4 *)((long)puVar2 + 0x14) = 0xff7fffee;
        puVar2[1] = 0x7f7fffee7f7fffee;
        *puVar2 = 0x7f7fffee7f7fffee;
        *(undefined8 *)((long)puVar2 + 0xc) = 0xff7fffeeff7fffee;
        *(undefined1 *)(puVar2 + 3) = 0xff;
      } while (lVar3 < lVar4);
    }
  }
  return;
}


