/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00812cc8; name: FUN_00812cc8
 */


void FUN_00812cc8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  *(undefined1 *)(param_1 + 0x7c) = 0;
  local_60[0] = 0;
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_018ff39c(param_1 + 0x730,local_60);
  *(undefined1 *)(param_1 + 0x740) = 0;
  *(undefined1 *)(param_1 + 0x780) = 0;
  *(undefined1 *)(param_1 + 0x7c0) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined2 *)(param_1 + 2000) = 0;
  FUN_0078b160(param_1 + 0x7d8);
  FUN_0078b160(param_1 + 0x7f8);
  FUN_00817eec(param_1 + 0x818,&DAT_03c886bc);
  FUN_00817eec(param_1 + 0x830,&DAT_03c886bc);
  *(undefined8 *)(param_1 + 0x848) = 0;
  FUN_007935cc(param_1 + 0x850);
  FUN_007935cc(param_1 + 0x858);
  puVar2 = PTR_DAT_047d0860;
  lVar3 = *(long *)(param_1 + 0x860);
  if ((lVar3 != 0) && (1 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50))) {
    uVar4 = 0;
    while( true ) {
      puVar5 = (undefined1 *)(lVar3 + (uVar4 & 0xffff) * 0xb0);
      *puVar5 = 0;
      *(undefined8 *)(puVar5 + 8) = 0;
      *(undefined2 *)(puVar5 + 0x10) = 0;
      FUN_0078b160(puVar5 + 0x18);
      FUN_0078b160(puVar5 + 0x38);
      *(undefined4 *)(puVar5 + 0x58) = 0x50004000;
      FUN_00817eec(puVar5 + 0x60,&DAT_03c886bc);
      FUN_00817eec(puVar5 + 0x78,&DAT_03c886bc);
      *(undefined2 *)(puVar5 + 0x90) = 0;
      FUN_007935cc(puVar5 + 0x98);
      FUN_007935cc(puVar5 + 0xa0);
      *(undefined2 *)(puVar5 + 0xa8) = 2;
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar1;
      if ((int)(*(ushort *)(*(long *)puVar2 + 0x50) - 1) <= (int)(uVar1 & 0xffff)) break;
      lVar3 = *(long *)(param_1 + 0x860);
    }
  }
  return;
}


