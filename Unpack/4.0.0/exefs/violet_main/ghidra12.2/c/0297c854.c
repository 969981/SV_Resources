/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0297c854; name: FUN_0297c854
 */


void FUN_0297c854(int param_1,byte param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 uVar4;
  
  if (param_2 < 0xb) {
    if ((param_1 - 1U & 0xff) < 5) {
      puVar3 = (undefined4 *)(&PTR_DAT_045fccb8)[(char)(param_1 - 1U)];
    }
    else {
      puVar3 = &DAT_03d6a374;
    }
    if ((int)puVar3[param_2] < 4) {
      uVar4 = (&DAT_03c72710)[(byte)(&DAT_03d6a455)[(uint)puVar3[param_2]]];
      goto LAB_0297c8cc;
    }
  }
  uVar4 = 2;
LAB_0297c8cc:
  uVar1 = FUN_00d9c228(1,param_1);
  uVar2 = FUN_0123af40(1,param_1,uVar4,0);
  FUN_0123a588(1,param_1,uVar2,uVar1 ^ 1);
  return;
}


