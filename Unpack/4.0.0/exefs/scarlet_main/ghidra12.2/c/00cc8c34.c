/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00cc8c34; name: FUN_00cc8c34
 */


void FUN_00cc8c34(ulong *param_1,ulong param_2,uint param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0xd) = 0x300;
  bVar3 = 2;
  if ((param_3 & 1) == 0) {
    bVar3 = 0;
  }
  bVar4 = 4;
  if ((param_4 & 1) == 0) {
    bVar4 = 0;
  }
  lVar1 = param_2 + 0x10;
  *(byte *)((long)param_1 + 0xc) = bVar4 | bVar3;
  lVar2 = param_2 + 0x18;
  if (param_2 < 0x11) {
    lVar1 = 0x20;
    lVar2 = 0x28;
  }
  *(undefined8 *)((long)param_1 + 0xf) = 0;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0x1f) = 0;
  *param_1 = param_2;
  *(long *)((long)param_1 + lVar1) = lVar2;
  return;
}


