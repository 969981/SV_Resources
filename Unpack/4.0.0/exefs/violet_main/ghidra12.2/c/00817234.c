/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00817234; name: FUN_00817234
 */


void FUN_00817234(long param_1,undefined1 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  int local_78 [4];
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined4 local_48 [2];
  undefined4 local_40 [4];
  undefined4 local_28 [2];
  
  if (((*(char *)(param_1 + 0x7c0) == '\x04') && (param_3 != 0)) &&
     (*(long *)(param_1 + 0x6e8) != 0)) {
    local_28[0] = 0;
    FUN_0078a244(&local_68,param_1 + 0x7d8,local_28);
    local_48[0] = 0;
    FUN_0078a244(&local_68,param_1 + 0x7f8,local_48);
    uVar1 = *(undefined8 *)(param_1 + 0x7c8);
    local_64 = (undefined1)local_28[0];
    local_67 = (undefined1)((uint)local_28[0] >> 0x18);
    local_65 = (undefined1)((uint)local_28[0] >> 8);
    local_63 = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x7f0) >> 8);
    local_62 = (undefined1)*(undefined2 *)(param_1 + 0x7f0);
    local_61 = (undefined1)((uint)local_48[0] >> 0x18);
    local_60 = (undefined1)((uint)local_48[0] >> 0x10);
    local_5f = (undefined1)((uint)local_48[0] >> 8);
    local_5d = (undefined1)((ushort)*(undefined2 *)(param_1 + 0x810) >> 8);
    local_5b = (undefined1)((ulong)uVar1 >> 0x38);
    local_5a = (undefined1)((ulong)uVar1 >> 0x30);
    local_59 = (undefined1)((ulong)uVar1 >> 0x28);
    local_58 = (undefined1)((ulong)uVar1 >> 0x20);
    local_57 = (undefined1)((ulong)uVar1 >> 0x18);
    local_56 = (undefined1)((ulong)uVar1 >> 0x10);
    local_55 = (undefined1)((ulong)uVar1 >> 8);
    local_53 = (undefined1)((ushort)*(undefined2 *)(param_1 + 2000) >> 8);
    local_51 = (undefined1)((param_4 & 0xffffffff) >> 8);
    local_66 = (undefined1)((uint)local_28[0] >> 0x10);
    local_5e = (undefined1)local_48[0];
    local_5c = (undefined1)*(undefined2 *)(param_1 + 0x810);
    local_54 = (undefined1)uVar1;
    local_52 = (undefined1)*(undefined2 *)(param_1 + 2000);
    local_50 = (undefined1)(param_4 & 0xffffffff);
    local_40[0] = 0;
    local_78[0] = 0;
    local_68 = param_2;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_78);
    FUN_00cbd7c0(local_78,local_40);
    if (local_78[0] == 0) {
      (**(code **)(**(long **)(param_1 + 0x6e8) + 1000))
                (local_40,*(long **)(param_1 + 0x6e8),param_3,&local_68,0x19,0x30);
      FUN_018ff39c(local_78,local_40);
    }
  }
  return;
}


