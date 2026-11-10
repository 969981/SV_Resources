/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001d51b4; name: FUN_001d51b4
 */


undefined8 FUN_001d51b4(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  ushort uVar4;
  long lVar5;
  undefined8 local_8;
  
  *(ushort *)(param_1 + 0x15a4) = *(ushort *)(param_1 + 0x15a4) & 0xfeff;
  if (((*(int *)(param_1 + 0x14e0) == 10) || (iVar1 = *(int *)(param_2 + 0x230), iVar1 == 10)) ||
     ((lVar5 = *(long *)(param_1 + 0xa40), iVar1 < 0xb && (lVar5 == 1)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((lVar5 == 0 || 1 < lVar5) && (iVar1 != 0x14)) {
      local_8 = param_3;
      lVar5 = FUN_001e0eb4(param_2,"Expect");
      if (lVar5 == 0) {
        uVar2 = FUN_001d4a1c(&local_8,"Expect: 100-continue\r\n");
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        uVar4 = *(ushort *)(param_1 + 0x15a4) | 0x100;
      }
      else {
        uVar3 = FUN_001d4bd8(lVar5,"Expect:","100-continue");
        uVar2 = 0;
        uVar4 = 0x100;
        if ((uVar3 & 1) == 0) {
          uVar4 = 0;
        }
        uVar4 = *(ushort *)(param_1 + 0x15a4) & 0xfeff | uVar4;
      }
      *(ushort *)(param_1 + 0x15a4) = uVar4;
    }
  }
  return uVar2;
}


