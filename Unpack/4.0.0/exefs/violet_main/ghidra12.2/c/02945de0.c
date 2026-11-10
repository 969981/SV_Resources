/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02945de0; name: FUN_02945de0
 */


void FUN_02945de0(long param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined2 local_60;
  ushort local_5e;
  undefined2 local_5c;
  undefined4 local_5a;
  undefined4 local_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  iVar1 = FUN_02945210();
  local_5e = FUN_0107bb74(*(undefined8 *)(param_1 + 0x48));
  local_5a = 0x1000101;
  local_54 = 0x1020125;
  local_4c = (uint)local_5e;
  local_5c = 0;
  local_38 = 0;
  local_60 = (undefined2)(iVar1 << ((ulong)param_3 & 1));
  local_48 = 0;
  uStack_40 = 0;
  local_68 = param_2;
  uStack_64 = param_2;
  uStack_50 = param_2;
  uVar2 = FUN_0293dcd0(param_1,&local_68);
  if (((((uVar2 & 1) != 0) &&
       (lVar3 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 0x78) + 0x288), lVar3 != 0)) &&
      (*(byte *)(lVar3 + 10) < 2)) && (*(undefined4 *)(lVar3 + 0xc) = 1, *(byte *)(lVar3 + 10) == 1)
     ) {
    *(undefined1 *)(lVar3 + 10) = 2;
  }
  return;
}


