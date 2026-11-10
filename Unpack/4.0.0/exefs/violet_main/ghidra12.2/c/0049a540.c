/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0049a540; name: FUN_0049a540
 */


undefined8 FUN_0049a540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_28;
  
  local_28 = param_3;
  iVar1 = FUN_0047e430(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = FUN_0047e450(param_2,iVar1);
      lVar4 = FUN_003e10b0();
      if (lVar4 == 5) {
        lVar4 = 0;
LAB_0049a57c:
        FUN_0049a7f0(0,(&PTR_s_status_request_044c3c00)[lVar4 * 2],&local_28);
      }
      else {
        if (lVar4 == 0x11) {
          lVar4 = 1;
          goto LAB_0049a57c;
        }
        FUN_0049ae10(0,uVar3,&local_28);
      }
      iVar1 = iVar1 + 1;
      iVar2 = FUN_0047e430(param_2);
    } while (iVar1 < iVar2);
    param_3 = local_28;
  }
  return param_3;
}


