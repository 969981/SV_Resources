/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007df328; name: FUN_007df328
 */


void FUN_007df328(int *param_1,ushort *param_2,ushort param_3,byte param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_58 [4];
  undefined4 local_48 [2];
  
  *param_2 = param_3;
  *(byte *)(param_2 + 2) = param_4 & 1;
  uVar1 = FUN_0078a12c();
  uVar6 = (ulong)param_3;
  lVar2 = FUN_007bf9f0(uVar6 << 5,uVar1);
  if ((lVar2 != 0) && (param_3 != 0)) {
    puVar3 = (undefined8 *)(lVar2 + 0x10);
    do {
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      uVar6 = uVar6 - 1;
      *puVar3 = 0;
      *(undefined1 *)((long)puVar3 + 0xc) = 0xff;
      *(undefined4 *)(puVar3 + 1) = 0;
      puVar3 = puVar3 + 4;
    } while (uVar6 != 0);
  }
  *(long *)(param_2 + 4) = lVar2;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  uVar6 = (ulong)((uint)param_3 * 0x70);
  uVar1 = FUN_0078a12c();
  lVar2 = FUN_007bfa40(uVar6,uVar1,8);
  if ((param_3 != 0) && (lVar2 != 0)) {
    lVar4 = lVar2 + 3;
    uVar5 = uVar6;
    do {
      *(undefined4 *)(lVar4 + -3) = 0;
      lVar4 = lVar4 + 4;
      uVar5 = uVar5 - 4;
    } while (uVar5 != 0);
  }
  *(long *)(param_2 + 0x3c) = lVar2;
  FUN_007e1398(param_1,param_2 + 0x14,lVar2,uVar6,(ulong)param_3 << 1,(uint)param_3,0);
  if (*param_1 == 0) {
    local_58[0] = 0;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
    FUN_00cbd7c0(param_1,local_58);
  }
  return;
}


