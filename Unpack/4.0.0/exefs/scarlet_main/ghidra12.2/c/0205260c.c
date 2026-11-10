/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0205260c; name: FUN_0205260c
 */


void FUN_0205260c(undefined8 *param_1,long param_2,long param_3,long *param_4)

{
  undefined4 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    do {
      uVar6 = *param_1;
      puVar1 = (undefined4 *)FUN_01053840();
      lVar2 = nn::os::GetTlsValue(*puVar1);
      if (lVar2 != 0) {
        if (0xf < *(ulong *)(lVar2 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined8 *)(lVar2 + *(ulong *)(lVar2 + 0x80) * 8) = uVar6;
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + 1;
      }
      *(undefined8 *)(lVar7 + -0x70) = 0;
      *(undefined8 *)(lVar7 + -0x68) = 0;
      *(undefined8 *)(lVar7 + -0x80) = 0;
      *(undefined8 *)(lVar7 + -0x78) = 0;
      if (*(code **)(param_3 + -0x68) != (code *)0x0) {
        (**(code **)(param_3 + -0x68))(param_3 + -0x60,lVar7 + -0x60);
        uVar6 = *(undefined8 *)(param_3 + -0x80);
        uVar4 = *(undefined8 *)(param_3 + -0x78);
        *(undefined8 *)(lVar7 + -0x68) = *(undefined8 *)(param_3 + -0x68);
        uVar5 = *(undefined8 *)(param_3 + -0x70);
        *(undefined8 *)(lVar7 + -0x78) = uVar4;
        *(undefined8 *)(lVar7 + -0x70) = uVar5;
        *(undefined8 *)(lVar7 + -0x80) = uVar6;
        pcVar3 = *(code **)(param_3 + -0x78);
        if (pcVar3 != (code *)0x0) {
          *(undefined8 *)(param_3 + -0x70) = 0;
          *(undefined8 *)(param_3 + -0x68) = 0;
          *(undefined8 *)(param_3 + -0x80) = 0;
          *(undefined8 *)(param_3 + -0x78) = 0;
          (*pcVar3)(param_3 + -0x60);
        }
      }
      param_3 = param_3 + -0x80;
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x80) + -1;
      }
      lVar7 = *param_4 + -0x80;
      *param_4 = lVar7;
    } while (param_2 != param_3);
  }
  return;
}


