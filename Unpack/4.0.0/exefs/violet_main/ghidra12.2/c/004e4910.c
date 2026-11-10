/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 004e4910; name: FUN_004e4910
 */


undefined1 * FUN_004e4910(long param_1,undefined1 *param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  int iVar7;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 != 0) {
    iVar7 = 0;
    do {
      if ((undefined1 *)*param_3 <= param_2) {
        param_2 = (undefined1 *)FUN_0052c6d8(param_3);
      }
      lVar5 = *(long *)(*(long *)(param_1 + 0x20) + (long)iVar7 * 8 + 8);
      *param_2 = 10;
      uVar2 = *(uint *)(lVar5 + 0x14);
      if (uVar2 < 0x80) {
        param_2[1] = (byte)uVar2;
        param_2 = param_2 + 2;
      }
      else {
        param_2[1] = (byte)uVar2 | 0x80;
        if (uVar2 >> 0xe == 0) {
          param_2[2] = (char)(uVar2 >> 7);
          param_2 = param_2 + 3;
        }
        else {
          param_2 = param_2 + 3;
          uVar2 = uVar2 >> 7;
          do {
            puVar6 = param_2;
            uVar3 = uVar2 >> 7;
            puVar6[-1] = (byte)uVar2 | 0x80;
            param_2 = puVar6 + 1;
            uVar4 = uVar2 >> 0xe;
            uVar2 = uVar3;
          } while (uVar4 != 0);
          *puVar6 = (char)uVar3;
        }
      }
      param_2 = (undefined1 *)FUN_004e3b00(lVar5,param_2,param_3);
      iVar7 = iVar7 + 1;
    } while (iVar7 != iVar1);
  }
  if ((*(ulong *)(param_1 + 8) & 1) == 0) {
    return param_2;
  }
  puVar6 = (undefined1 *)
           FUN_005161f8((*(ulong *)(param_1 + 8) & 0xfffffffffffffffe) + 8,param_2,param_3);
  return puVar6;
}


