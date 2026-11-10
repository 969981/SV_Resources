/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 016799f0; name: FUN_016799f0
 */


void FUN_016799f0(undefined8 param_1,long param_2,char param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  if (param_3 == '\x02') {
    uVar1 = *(undefined1 *)(param_2 + 0xf);
    uVar2 = *(undefined1 *)(param_2 + 0x12);
    uVar3 = *(undefined1 *)(param_2 + 0x15);
    uVar4 = *(undefined1 *)(param_2 + 0x18);
    uVar5 = *(undefined1 *)(param_2 + 0x1b);
  }
  else if (param_3 == '\x01') {
    uVar1 = *(undefined1 *)(param_2 + 0xe);
    uVar2 = *(undefined1 *)(param_2 + 0x11);
    uVar3 = *(undefined1 *)(param_2 + 0x14);
    uVar4 = *(undefined1 *)(param_2 + 0x17);
    uVar5 = *(undefined1 *)(param_2 + 0x1a);
  }
  else {
    if (param_3 != '\0') {
      return;
    }
    uVar1 = *(undefined1 *)(param_2 + 0xd);
    uVar2 = *(undefined1 *)(param_2 + 0x10);
    uVar3 = *(undefined1 *)(param_2 + 0x13);
    uVar4 = *(undefined1 *)(param_2 + 0x16);
    uVar5 = *(undefined1 *)(param_2 + 0x19);
  }
  FUN_0129aff0(param_1,0x7e,param_3,uVar1,uVar2,uVar3,uVar4,uVar5);
  return;
}


