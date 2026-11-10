/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0051aab0; name: FUN_0051aab0
 */


undefined1 * FUN_0051aab0(long param_1,long *param_2,undefined1 *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined1 *puVar5;
  undefined8 extraout_x1;
  
  (**(code **)(*param_2 + 0x98))(param_2);
  if ((undefined1 *)*param_4 <= param_3) {
    param_3 = (undefined1 *)FUN_0052c6d8(param_4,param_3);
  }
  *param_3 = 0xb;
  uVar3 = *(uint *)(param_1 + 0x44);
  param_3[1] = 0x10;
  if (uVar3 < 0x80) {
    param_3[2] = (byte)uVar3;
    param_3 = param_3 + 3;
  }
  else {
    param_3[2] = (byte)uVar3 | 0x80;
    if (uVar3 >> 0xe == 0) {
      param_3[3] = (char)(uVar3 >> 7);
      param_3 = param_3 + 4;
    }
    else {
      param_3 = param_3 + 4;
      uVar3 = uVar3 >> 7;
      do {
        puVar5 = param_3;
        uVar1 = uVar3 >> 7;
        puVar5[-1] = (byte)uVar3 | 0x80;
        param_3 = puVar5 + 1;
        uVar2 = uVar3 >> 0xe;
        uVar3 = uVar1;
      } while (uVar2 != 0);
      *puVar5 = (char)uVar1;
    }
  }
  plVar4 = (long *)FUN_004f72a0(extraout_x1,param_2,param_1,0);
  *param_3 = 0x1a;
  uVar3 = (**(code **)(*plVar4 + 0x50))();
  if (uVar3 < 0x80) {
    param_3[1] = (byte)uVar3;
    param_3 = param_3 + 2;
  }
  else {
    param_3[1] = (byte)uVar3 | 0x80;
    if (uVar3 >> 0xe == 0) {
      param_3[2] = (char)(uVar3 >> 7);
      param_3 = param_3 + 3;
    }
    else {
      param_3 = param_3 + 3;
      uVar3 = uVar3 >> 7;
      do {
        puVar5 = param_3;
        uVar1 = uVar3 >> 7;
        puVar5[-1] = (byte)uVar3 | 0x80;
        param_3 = puVar5 + 1;
        uVar2 = uVar3 >> 0xe;
        uVar3 = uVar1;
      } while (uVar2 != 0);
      *puVar5 = (char)uVar1;
    }
  }
  puVar5 = (undefined1 *)(**(code **)(*plVar4 + 0x60))(plVar4,param_3,param_4);
  if ((undefined1 *)*param_4 <= puVar5) {
    puVar5 = (undefined1 *)FUN_0052c6d8(param_4);
  }
  *puVar5 = 0xc;
  return puVar5 + 1;
}


