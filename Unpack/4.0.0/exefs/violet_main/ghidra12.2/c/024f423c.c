/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 024f423c; name: FUN_024f423c
 */


void FUN_024f423c(undefined1 *param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8,double param_9)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_02500810(&local_40,(float)param_2,(float)param_3,(float)param_4,(float)param_5,(float)param_6,
               (float)param_7,(float)param_8,(float)param_9);
  *(undefined8 *)(param_1 + 8) = local_40;
  *(undefined8 *)(param_1 + 0x10) = uStack_38;
  *param_1 = 1;
  *(undefined8 *)(param_1 + 0x18) = local_30;
  *(undefined8 *)(param_1 + 0x20) = uStack_28;
  return;
}


