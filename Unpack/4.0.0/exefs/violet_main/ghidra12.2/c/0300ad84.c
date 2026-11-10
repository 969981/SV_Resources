/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0300ad84; name: FUN_0300ad84
 */


void FUN_0300ad84(long *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_2 != param_3) {
    piVar1 = param_2;
    do {
      piVar2 = piVar1 + 1;
      lVar3 = param_1[3] + (long)*piVar1 * 0x28;
      *(undefined2 *)(lVar3 + 0x24) = 0;
      *(undefined1 *)(lVar3 + 0x14) = 0;
      *(undefined8 *)(lVar3 + 0x18) = 0xffffffff00ffffff;
      *(undefined1 *)(lVar3 + 0x26) = 0;
      piVar1 = piVar2;
    } while (param_3 != piVar2);
    piVar1 = param_2;
    do {
      piVar2 = piVar1 + 1;
      puVar4 = (undefined8 *)(param_1[5] + (long)*piVar1 * 0x150);
      *(undefined4 *)((long)puVar4 + 0x14) = 0xff7fffee;
      puVar4[1] = 0x7f7fffee7f7fffee;
      *puVar4 = 0x7f7fffee7f7fffee;
      *(undefined8 *)((long)puVar4 + 0xc) = 0xff7fffeeff7fffee;
      *(undefined1 *)(puVar4 + 3) = 0xff;
      piVar1 = piVar2;
    } while (param_3 != piVar2);
    if (*(char *)(*param_1 + 0x15de) != '\0') {
      piVar1 = param_2;
      do {
        piVar2 = piVar1 + 1;
        *(undefined1 *)(param_1[7] + (long)*piVar1) = 0;
        piVar1 = piVar2;
      } while (param_3 != piVar2);
      piVar1 = param_2;
      do {
        piVar2 = piVar1 + 1;
        lVar3 = param_1[0xb] + (long)*piVar1 * 0x28;
        *(undefined2 *)(lVar3 + 0x24) = 0;
        *(undefined1 *)(lVar3 + 0x14) = 0;
        *(undefined8 *)(lVar3 + 0x18) = 0xffffffff00ffffff;
        *(undefined1 *)(lVar3 + 0x26) = 0;
        piVar1 = piVar2;
      } while (param_3 != piVar2);
      do {
        piVar1 = param_2 + 1;
        puVar4 = (undefined8 *)(param_1[0xd] + (long)*param_2 * 0x150);
        *(undefined4 *)((long)puVar4 + 0x14) = 0xff7fffee;
        puVar4[1] = 0x7f7fffee7f7fffee;
        *puVar4 = 0x7f7fffee7f7fffee;
        *(undefined8 *)((long)puVar4 + 0xc) = 0xff7fffeeff7fffee;
        *(undefined1 *)(puVar4 + 3) = 0xff;
        param_2 = piVar1;
      } while (param_3 != piVar1);
    }
  }
  return;
}


